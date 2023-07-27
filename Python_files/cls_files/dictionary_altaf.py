str=input("Enter string : ")
dic={}
for i in str:
    if i not in dic:
        a=ord(i.lower())
        dic[i]=a-96
print(dic)

n=int(input("Enter the number n : "))
ans=0
for i in range(1,n+1):
    if(i%2!=0):
        ans=ans+i
    else:
        ans=ans-i
print(ans)
