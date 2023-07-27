from math import sqrt

def isprime(x):
    if x < 2:
        return False
    for i in range(2, int(sqrt(x))+1):
        if x % i == 0:
            return False
    return True

n=int(input("Enter the size of the list : "))
list_1=[]
list_2=[]
for i in range(1,n+1):
    a=int(input())
    list_1.append(a)
for i in range(n):
    for j in range(1,n):
        if isprime(list_1[i]*10+list_1[j]):
            list_2.append(list_1[i]*10+list_1[j])
        if isprime(list_1[j]*10+list_1[i]):
            list_2.append(list_1[j]*10+list_1[i])

print(list_2)
