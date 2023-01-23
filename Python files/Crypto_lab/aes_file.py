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

secretKey = os.urandom(32)  # 256-bit random encryption key

print("Encryption key:", binascii.hexlify(secretKey))

# file = open("Python files/Crypto_lab/aes.txt", "r")
# cipher = open("Python files/Crypto_lab/cipher.txt", "w")
msg = input("Enter your name: ")

byte_msg=bytes(msg,'utf-8')


# msg = b'Message for AES-256-GCM + Scrypt encryption'
byte_msg=bytes(msg,'utf-8')
print(type(byte_msg))
encryptedMsg = encrypt_AES_GCM(byte_msg, secretKey)
print("encryptedMsg", {
    'ciphertext': binascii.hexlify(encryptedMsg[0]),
    'aesIV': binascii.hexlify(encryptedMsg[1]),
    'authTag': binascii.hexlify(encryptedMsg[2])
})
# cipher.write(str(binascii.hexlify(encryptedMsg[0])))

decryptedMsg = decrypt_AES_GCM(encryptedMsg, secretKey)
print("decryptedMsg", decryptedMsg)