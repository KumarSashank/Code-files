plainText=input('Enter text: ')
length=len(plainText)
for i in range(length):
    x=ord(plainText[i])
    x=x+4
    if(x>122):
        x=x-122
        x=x+96
    print(chr(x),end="")
print()