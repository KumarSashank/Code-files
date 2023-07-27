import base32hex
import hashlib
from Cryptodome.Cipher import DES
from secrets import token_bytes

h=b'T&Z\xa33\x16\x99\xfb'

def encrypt(msg):
    cipher = DES.new(h, DES.MODE_EAX)
    nonce = cipher.nonce
    ciphertext, tag = cipher.encrypt_and_digest(msg.encode('ascii'))
    return nonce, ciphertext, tag

nonce, ciphertext, tag = encrypt(input('Enter a message: '))
print(f'Cipher text: {ciphertext}')
print(f'Nonce: {nonce}')
print(f'Tag: {tag}')
