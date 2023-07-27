def find_missing(N, A):
    result = []
    xor_all = 0
    xor_array = 0
    
    # Calculating XOR of all numbers from 1 to N
    for i in range(1, N + 1):
        xor_all ^= i
    
    # Calculating XOR of all array elements
    for num in A:
        xor_array ^= num
    
    # Calculating XOR of missing and repeated numbers
    xor_diff = xor_all ^ xor_array
    
    # Finding the rightmost set bit in xor_diff
    rightmost_set_bit = xor_diff & -xor_diff
    
    # Dividing the numbers into two groups based on the rightmost set bit
    N1 = 0
    N2 = 0
    for num in A:
        if num & rightmost_set_bit:
            N1 ^= num
        else:
            N2 ^= num
    
    for i in range(1, N + 1):
        if i & rightmost_set_bit:
            N1 ^= i
        else:
            N2 ^= i
    
    # Appending the required numbers in increasing order to the result list
    result.append(min(N1, N2))
    result.append(max(N1, N2))
    
    return result


# Input
N = int(input())
A = list(map(int, input().split()))

# Function call
result = find_missing(N, A)

# Output
print(" ".join(str(x) for x in result))
