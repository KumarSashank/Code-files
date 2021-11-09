n= int(input())
a=[]
b=[]
for i in range(n):
    a.append(input())
    length=len(a[i])
    count=0
    temp=a[i]
    for j in range(length//2):
        if temp[j]!=temp[length-j-1]:count+=1
    b.append(count)
k=0
index=None
for i in range(1,n):
    if b[k]<b[i]:k=i
print(a[k])
# print(b)