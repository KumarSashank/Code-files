list1=[]
list2=[]
n=int(input())
for i in range(n):
    a=input()
    b=float(input())
    list1.append(a)
    list1.append(b)
    list2.append(list1)
    list1=[]
print(list2)
