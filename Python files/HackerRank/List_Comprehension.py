i=int(input())
j=int(input())
k=int(input())
n=int(input())
list1=[]
list2=[]
for a in range(i+1):
    for b in range(j+1):
        for c in range(k+1):
            if a+b+c!=n:
                list2.append(a)
                list2.append(b)
                list2.append(c)
                list1.append(list2)
                list2=[]
print(list1)