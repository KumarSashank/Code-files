def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def cashew_conjecture(n, k):
    prime_count=0
    for i in range(2,n+1):
        if is_prime(i):
            for j in range(i+1, n+1):
                if is_prime(j):
                    if i+j+1<=k:
                        prime_count+=1
    if prime_count>=k:
        return "YES"
    else:
        return "NO"

n, k = map(int, input().split())
print(cashew_conjecture(n, k))
