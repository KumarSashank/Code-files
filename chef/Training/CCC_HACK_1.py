n, m = map(int, input().split())
arr = list(map(int, input().split()))[:n]

arr.sort()
#sum of the elements in a list
sum = 0
for i in arr:
    sum += i

wait = 0
flag = 0
if len(arr) == 1:
    print(arr[0]+1)
else:
    while len(arr) > 0:
        for i in range(len(arr) - 1, 0, -1):
            if arr[0] + arr[i] <= m:
                arr.pop(i)
                arr.pop(0)
                break
        else:
            arr.pop(0)
            wait += 1
    print(sum + wait)