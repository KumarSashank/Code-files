t=int(input())
for i in range(t):
    c=0
    p=-1
    s=input()
    n=len(s)
    if n==1:
        print("NO")
        continue
    for j in range(0,n+1):
        if  '1' in s:
            c+=1
            p=i+1
    if c==0 or (c==1 and p==n):
        print("NO")
    else:
        print("YES")