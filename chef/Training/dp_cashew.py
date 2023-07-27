def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def cashew_conjecture(n, k):
    dp = [0] * (n + 1)
    primes = []
    for i in range(2, n + 1):
        if is_prime(i):
            primes.append(i)
    for i in range(2, n + 1):
        if is_prime(i):
            for j in primes:
                if j >= i:
                    break
                if i + j + 1 <= n:
                    dp[i + j + 1] += 1
    count = 0
    for i in range(2, n + 1):
        if dp[i] >= k:
            count += 1
    if count >= k:
        return "YES"
    else:
        return "NO"

n, k = map(int, input().split())
print(cashew_conjecture(n, k))
