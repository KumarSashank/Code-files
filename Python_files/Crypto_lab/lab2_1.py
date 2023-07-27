plainText='PHHW PH DIWHU WKH WRJD SDUWB'
# plainText='ZICVTWQNGKZEIIGASXSTSLVVWLA'
text_withoutspace=''
for i in plainText:
    if i!=' ':
        text_withoutspace+=i
print(text_withoutspace)
length=len(text_withoutspace)
for j in range(1,26):
    print(j,end=" ")
    for i in range(length):
        x=ord(text_withoutspace[i])
        x=x+j
        if(x>90):
            x=x-90
            x=x+64
        print(chr(x),end="")
    
    print()