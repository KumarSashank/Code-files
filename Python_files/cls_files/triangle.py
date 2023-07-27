def solution(arr):
    list1=[]
    size=len(arr)
    size=size-2
    for i in range(size):
        if arr[i]+arr[i+1]>arr[i+2] and arr[i]+arr[i+2]>arr[i+1] and arr[i+1]+arr[i+2]>arr[i]:
            list1.append(1)
        else:
            list1.append(0)
    return list1

#input the array of integers without asking size
arr=list(map(int,input().split()))
print(solution(arr))
