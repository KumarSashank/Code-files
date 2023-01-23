import hashlib
from Cryptodome.Cipher import AES
import binascii, os
def encrypt_AES_GCM(msg, secretKey):
    aesCipher = AES.new(secretKey, AES.MODE_GCM)
    ciphertext, authTag = aesCipher.encrypt_and_digest(msg)
    return (ciphertext, aesCipher.nonce, authTag)

def decrypt_AES_GCM(encryptedMsg, secretKey):
    (ciphertext, nonce, authTag) = encryptedMsg
    aesCipher = AES.new(secretKey, AES.MODE_GCM, nonce)
    plaintext = aesCipher.decrypt_and_verify(ciphertext, authTag)
    return plaintext

s = input("Enter the message to be hashed: ")
c = hashlib.sha512(s.encode())
#print(c.hexdigest())
msg = input("Enter the plain text message: ")
pt = msg + c.hexdigest()
print("Plain text with hashed text: \n" + pt )

secretKey = os.urandom(32)  # 256-bit random encryption key
print("Encryption key:", binascii.hexlify(secretKey))

#string = input("Enter the plain text: ")
string = bytes(pt, encoding= 'utf-8')
encryptedMsg = encrypt_AES_GCM(string, secretKey)
print("encryptedMsg", {
    binascii.hexlify(encryptedMsg[0]),
})
