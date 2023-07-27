result=0
def recurse(m):
    
    if(m<=0):
        return 1
    else:
        return (m * recurse(m-1))
    

j=int(input("Enter the number: "))
product=1
for i in range(1,j+1):
    product=product*i
print("Without Recursion : ",product)
fact=0
print("With recursion: ",recurse(j))


