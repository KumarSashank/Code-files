n= int(input())
for i in range(n):
    a=input()
    arr=list(map(int,a.split(" ")))
    if arr[0]>arr[1]:print(arr[2]//arr[1])
    else:print(arr[2]//arr[0])