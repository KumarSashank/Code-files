list1 = []
list2 = []
prime_numbers = {}
i = 2
j = 0
l = 1
while i <= 100:
    flag = 0
    if i == 2:
        list1.append(i)
        i = i+1
        j = j+1
    elif i == 4:
        i = i+1
    else:
        k = 2
        for k in range(2, i//2):
            if i % k == 0:
                flag = 1
                break
    if flag != 1:
        list1.append(i)
        i = i+1
        j = j+1
    else:
        i = i+1
while l <= 25:
    list2.append(l)
    l = l+1
prime_numbers = dict(zip(list2, list1))
print(prime_numbers)