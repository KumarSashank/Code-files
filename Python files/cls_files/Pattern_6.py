n=int(input("Enter the num:"))
j=int(1)
k=int(1)
for i in range(1,n,1):
    k=1
    while(k<=i):
       print(j," ",end="")
       j=j+1
       k=k+1
       if(j==n+1): break
    if(j==n+1): break
    print()