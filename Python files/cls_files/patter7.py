n=int(input("Enter the number: "))
for i in range(1,n+1,1):
    k=n
    while(k>i):
        print("   ",end='')
        k=k-1
    for j in range(1,i,1):
        print(j," ",end='')
    for j in range(i,0,-1):
        print(j," ",end='')
    print()
for i in range(n,0,-1):
    k=n
    while(k>i):
        print("   ",end='')
        k=k-1
    for j in range(1,i,1):
        print(j," ",end='')
    for j in range(i,0,-1):
        print(j," ",end='')
    print()