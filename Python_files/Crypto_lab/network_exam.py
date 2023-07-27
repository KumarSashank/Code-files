#Write a program to ensure integrity and confidentiality in client server communication using symmetric key based mechanism using Internal Error Control.
#Use SHA 256 and AES for implementing the protocol. Message = "live long and prosper + <your name>"+" "+<Roll_NO>.

import hashlib
from Cryptodome.Cipher import AES
import hashlib
from Cryptodome.Cipher import AES
import binascii, os

name="Kumar Sashank"
rollnum="AP20110010229"

#Given Message is
message ="live long and prosper "+name+" "+rollnum
secretKey = os.urandom(32)

print(message)

# AES encryption
def encrypt_AES_GCM(msg, secretKey):
    aesCipher = AES.new(secretKey, AES.MODE_GCM)
    ciphertext, authTag = aesCipher.encrypt_and_digest(msg)
    return (ciphertext, aesCipher.nonce, authTag)


#generate the hash using SHA256 for the message
hash = hashlib.sha256(message.encode()).hexdigest()
print("Hash of the message is: ",hash)

#Pad the message with hash
message=message+hash

# print('encode')
#convert the message to bytes
message_bytes = message.encode()
# print(message_bytes)

#divide the message and hash from the message bytes
message_new=message_bytes[:len(message_bytes)-64]
hash_new=message_bytes[len(message_bytes)-64:]
print()
print()
print(message_new)
print()
print(hash_new)

encryptedMsg = encrypt_AES_GCM(message_bytes, secretKey)
# print("encryptedMsg", {
#     'ciphertext': binascii.hexlify(encryptedMsg[0]),
#     'aesIV': binascii.hexlify(encryptedMsg[1]),
#     'authTag': binascii.hexlify(encryptedMsg[2])
# })
print("Encrypted message is: ", binascii.hexlify(encryptedMsg[0]))
print("AES IV is: ", binascii.hexlify(encryptedMsg[1]))
#2225452


