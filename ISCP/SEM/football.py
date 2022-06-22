m=int(input())
teamA=[]
teamB=[]
for i in range(m):
    teamA.append(int(input()))
n=int(input())
for i in range(n):
    teamB.append(int(input()))
teamA.sort()
answer=[]
for score in teamB:
    low, high = 0, len(teamA) - 1
    while low <= high:
        mid = (low + high) // 2
        if teamA[mid] > score:
            high = mid - 1
        else:
            low = mid + 1
    answer.append(low)
for i in range(n):
    print(answer[i])
