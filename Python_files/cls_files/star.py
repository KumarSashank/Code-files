n=int (input("Enter the size of the star:"))
for i in range(n+1):
    for j in range(i):
           while i<n*3:
              print(" ",end='')
              i=i+1
           print(" *",end='')
    print()
k=0
for i in range(n*3,n*2,-1):
    j=0
    while j<k:
        print(" ",end='')
        j=j+1
    for p in range(i):
        print(" *",end='')
    print()

    k=k+1
k=n
j=1
for i in range(n):
    h=0
    while i<n:
              print(" ",end='')
              i=i+1
    for p in range(k):
        print("* ",end='')
    while h<(3)*j:
        print(" ",end='')
        h=h+1
    for p in range(k):
        print("* ",end='')
    print()
    k=k-1
    j=j+2
    

    