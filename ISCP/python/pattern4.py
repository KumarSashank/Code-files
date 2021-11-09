n=int(input())
k=n//2
k=k+1
for i in range(1,k+1):
    for j in range(1,i):
        print(" ",end='')
    print(i,end='')
    if i!=k:
        for j in range(1,(n-(2*i))+1):
          print(" ",end='')
        print(n-i+1)