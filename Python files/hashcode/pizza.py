n=int(input())
like={"a"}
dislike={"a"}
for i in range(n):
    c= list(map(str,input().split(" ")))
    c.pop(0)
    set1=set(c)
    like.update(set1)
    d= list(map(str,input().split(" ")))
    d.pop(0)
    set2=set(d)
    dislike.update(set2)
final=like-dislike
count=len(final)
list1=list(final)
list1.insert(0,count)
for i in range(count+1):
    print(list1[i],end=" ")