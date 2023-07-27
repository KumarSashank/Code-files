import base32hex
import hashlib
from Cryptodome.Cipher import DES
from secrets import token_bytes

h=b'T&Z\xa33\x16\x99\xfb'

def decrypt(nonce, ciphertext, tag):
    cipher = DES.new(h, DES.MODE_EAX, nonce=nonce)
    plaintext = cipher.decrypt(ciphertext)

    try:
        cipher.verify(tag)
        return plaintext.decode('ascii')
    except:
        return False

