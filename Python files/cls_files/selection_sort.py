n=int(input("Enter the size : "))
a=[]
for i in range(n):
    print("Enter the number : ")
    j=int(input())
    a.append(j)
for i in range(n-1):
    min=i
    for j in range(i+1,n):
        if a[j]<a[min]:min=j
        if a[min]!=a[i]:
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
print("Sorted array : ")
for i in range(n):
    print(a[i]," ",end=" ")
   