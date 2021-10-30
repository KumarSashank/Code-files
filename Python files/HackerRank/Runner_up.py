import math

n=int(input())
spy=input()
soy=map(int,spy.split(" "))
list1=[]
for i in range(len(soy)):
    # a=int(input())
    list1.append(soy[i])
sort=[]
for i in range(n):
    for j in range(n):
        if list1[i]>list1[j]:
            temp=list1[i]
            list1[i]=list1[j]
            list1[j]=temp
for i in range(n-1):
    if list1[i]!=list1[i+1]:
        print(list1[i+1])
        break
print(list1)