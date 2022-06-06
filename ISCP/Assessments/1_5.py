# You are using Python
a=int(input())
print(a if a%2==1 else "",end=" ")
for i in range(1,a//2+1):
    print(i,end=" ")
    print(i+a//2,end=" ")