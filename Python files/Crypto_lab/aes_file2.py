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
t = open("Python files/Crypto_lab/aes.txt", 'r')
aes=open("Python files/Crypto_lab/cipher.txt", 'w')
cipher=''
for l in t:
    string = l
    string = bytes(string, encoding= 'utf-8')
    encryptedMsg = encrypt_AES_GCM(string, secretKey)
    print("encryptedMsg", {
        'ciphertext': binascii.hexlify(encryptedMsg[0]),
        'aesIV': binascii.hexlify(encryptedMsg[1]),
        'authTag': binascii.hexlify(encryptedMsg[2])
    })
    cipher+=str(binascii.hexlify(encryptedMsg[0]))
    decryptedMsg = decrypt_AES_GCM(encryptedMsg, secretKey)
    print("decryptedMsg", decryptedMsg)
aes.write(cipher)