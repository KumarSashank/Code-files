primenumbers={}
n=100
l=0
for num in range(0,n+1):
   if num > 1:
       for i in range(2, num):
           if (num % i) == 0:
               break
       else:
           l=l+1
           primenumbers.update({l:num})
print(primenumbers)