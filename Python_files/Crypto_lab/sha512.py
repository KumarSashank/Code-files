import hashlib

def sha512_hash(string):
    return hashlib.sha512(string.encode()).hexdigest()

text=input("Enter the text to be hashed: ")
print("The SHA512 hash of the text is: ",sha512_hash(text))