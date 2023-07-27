from Cryptodome.PublicKey import RSA
from Cryptodome.Cipher import AES
from Cryptodome.Hash import SHA256
from Cryptodome.Signature import pkcs1_15
import socket

# Load server's public key
server_public_key = RSA.import_key(open("server_public_key.pem").read())

# Generate AES session key
key_size = 256
session_key = AES.new(key_size, AES.MODE_EAX).nonce

# Encrypt session key using server's public key
ciphertext, tag = server_public_key.encrypt(session_key, None)

# Connect to server and send encrypted session key
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(("localhost", 1234))
s.send(ciphertext)
s.send(tag)

# Send encrypted data and MAC
message = b"Hello from client."
cipher = AES.new(session_key, AES.MODE_EAX)
ciphertext, tag = cipher.encrypt_and_digest(message)
mac = SHA256.new(session_key + ciphertext).digest()

s.send(ciphertext)
s.send(tag)
s.send(mac)

# Receive response
ciphertext = s.recv(1024)
tag = s.recv(16)
mac = s.recv(32)

# Verify MAC
cipher = AES.new(session_key, AES.MODE_EAX, nonce=ciphertext)
plaintext = cipher.decrypt_and_verify(ciphertext, tag)

if SHA256.new(session_key + ciphertext).digest() == mac:
    print("MAC verified.")
else:
    print("MAC verification failed.")

# Close connection
s.close()
