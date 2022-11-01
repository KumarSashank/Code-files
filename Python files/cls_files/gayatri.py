a=int(input("Number of classes held:"))
b=int(input("Number of classes attended:"))
c= (b/a)*100    
if c>=75:
    print("Allowed")
    print(c) 
elif c<75 :
    m=int(input())
    if m==1:
        print("Allowed")
        print(c) 
    elif m==0:
        print("Not Allowed ")
        print(c)