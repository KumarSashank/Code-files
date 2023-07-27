plaintext = 'wearediscoveredsaveyourself'
key='deceptive'
enc=[]
key = list(key)
if len(plaintext) != len(key):
    for i in range(len(plaintext) - len(key)):
        key.append(key[i % len(key)])
#print(key)
for i in range(len(plaintext)):
    x=ord(plaintext[i])
    y=ord(key[i])-97
    x=x+y
    if x>122:
        x=x-122
        x=x+96
    enc.append(chr(x))
#print(enc)
cipher=''
for i in enc:
    cipher+=i
print("Ciphertext is " + "'" +  cipher + "'")
dec=[]
for i in range(len(enc)):
    x=ord(enc[i])
    y=ord(key[i])-97
    x=x-y+26
    if x>122:
        x=x-122
        x=x+96
    dec.append(chr(x))
#print(dec)
plain=''
for i in dec:
    plain+=i
print("Palintext is " +"'"+ plain+"'")