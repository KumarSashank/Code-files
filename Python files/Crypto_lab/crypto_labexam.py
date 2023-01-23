#diffie hellman key exchange with p=17 ang g=14
#user 1 has private key 3 and user 2 has private key 6


import math

print("Diffie Hellman Key Exchange")
print('Enter the 2 prime numbers')
p=int(input())
g=int(input())

print('Enter the private keys of the 2 users')
a=int(input())
b=int(input())

A=pow(g,a,p)
B=pow(g,b,p)

print('Public key of A is'+str(A))
print('Public key of B is'+str(B))

#shared public key of 2 users
s1=pow(B,a,p)
s2=pow(A,b,p)

print('Shared public key of A is'+str(s1))
print('Shared public key of B is'+str(s2))