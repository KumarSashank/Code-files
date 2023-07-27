n=int(input("Enter the size of array : "))
dic1={}
dic2={}
for i in range(1,n+1):
    x=int(input())
    dic1.update({i:x})
for i in range(1,n+1):
    x=int(input())
    dic2.update({i:x})
for i in range(1,n+1):
    x=dic1[i]
    y=dic2[i]
    dic2[i]=x+y
print(dic2)