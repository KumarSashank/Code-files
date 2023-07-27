import base32hex
import hashlib
from Cryptodome.Cipher import DES
from secrets import token_bytes

key = token_bytes(8)
h=b'T&Z\xa33\x16\x99\xfb'

def encrypt(msg):
    cipher = DES.new(h, DES.MODE_EAX)
    nonce = cipher.nonce
    ciphertext, tag = cipher.encrypt_and_digest(msg.encode('ascii'))
    return nonce, ciphertext, tag

def decrypt(nonce, ciphertext, tag):
    cipher = DES.new(h, DES.MODE_EAX, nonce=nonce)
    plaintext = cipher.decrypt(ciphertext)

    try:
        cipher.verify(tag)
        return plaintext.decode('ascii')
    except:
        return False

#open a file for reading
f = open("Python files/Crypto_lab/text.txt", "r")
#read the entire file into a string
data = f.read()
#close the file
f.close()


nonce, ciphertext, tag = encrypt(data)

plaintext = decrypt(nonce, ciphertext, tag)

print(f'Cipher text: {ciphertext}')
#create a new file for writing
f = open("Python files/Crypto_lab/cipher.txt", "w")
f.write(str(ciphertext))
f.close()

if not plaintext:
    print('Message is corrupted!')
else:
    print(f'Plain text: {plaintext}')