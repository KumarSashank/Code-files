n = int(input())
list = []
for j in range(0,n):
    i =input().split()
    if(i[0]== "insert"):
        list.insert(int(i[1]),int(i[2]))
    elif(i[0]== "remove"):
        list.remove(int(i[1]))
    elif(i[0]== "append"):
        list.append(int(i[1]))
    elif(i[0]== "sort"):
        list.sort()
    elif(i[0]== "pop"):
        list.pop()
    elif(i[0]== "reverse"):
        list.reverse()
    elif(i[0]== "print"):
        print(list)