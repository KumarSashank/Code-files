def search():
    for i in range(n):
        if(num==list1[i]):
            print("Element Found at ",i+1,"th Position")
            break

list1 = []
n=int(input("Enter the total number: "))
for i in range(n):
    m=int(input(""))
    list1.append(m)
num=int(input("Enter the number to search: "))
search()


