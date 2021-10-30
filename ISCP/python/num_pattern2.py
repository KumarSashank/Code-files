n= int(input())
a=str(1)
print(a)
for i in range(2,n+1):
    if i%2==0:
        a="0"+a
    else:
        a="1"+a
    print(a)
