import base32hex
import hashlib
from Cryptodome.Cipher import DES
from secrets import token_bytes

key = token_bytes(8)
# print(type(key))
# # salt = '\x28\xABdra\xBC\xCD\xDE\xEF\x00\x33'
# # key = salt
# # key=hashlib.md5(key.encode('utf-8')).hexdigest()
# print(key)

h=b'T&Z\xa33\x16\x99\xfb'
# print(h)
# print(type(h))

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

nonce, ciphertext, tag = encrypt(input('Enter a message: '))
# print(nonce)
# print(tag)
plaintext = decrypt(nonce, ciphertext, tag)

print(f'Cipher text: {ciphertext}')

if not plaintext:
    print('Message is corrupted!')
else:
    print(f'Plain text: {plaintext}')