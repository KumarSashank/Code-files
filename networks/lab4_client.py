from Cryptodome.PublicKey import RSA
from Cryptodome.Cipher import AES
from Cryptodome.Hash import SHA256
from Cryptodome.Signature import pkcs1_15
import socket

# Generate RSA key pair
key = RSA.generate(2048)

# Save server's public key
public_key = key.publickey()
with open("server_public_key.pem", "wb") as f:
    f.write(public_key.export_key())

# Accept client connection
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind(("localhost", 1234))
s.listen(1)
conn, addr = s.accept()

# Receive encrypted session key
ciphertext = conn.recv(256)
tag = conn.recv(16)
session_key = key.decrypt((ciphertext, tag))

# Receive encrypted data and MAC
ciphertext = conn.recv(1024)
tag = conn.recv(16)
mac = conn.recv(32)

# Verify MAC
cipher = AES.new(session_key, AES.MODE_EAX, nonce=ciphertext)
plaintext = cipher.decrypt_and_verify(ciphertext, tag)

if SHA256.new(session_key + ciphertext).digest() == mac:
    print("MAC verified.")
else:
    print("MAC verification failed.")
    
# Send response
response = b"Server response."
cipher = AES.new(session_key, AES.MODE_EAX)
ciphertext, tag = cipher.encrypt_and_digest(response)
mac = SHA256.new(session_key + ciphertext).digest()

conn.send(ciphertext)
conn.send(tag)
conn.send(mac)

# Close connection
conn.close()
s.close()
