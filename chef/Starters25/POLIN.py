Test=int(input())
for i in range(Test):
    a=int(input())
    List1=[]
    List2=[]
    for Answer in range(a):
        n=list(map(int,input().split(" ")))
        List1.append(n[0])
        List2.append(n[1])
    Set1=set(List1)
    Set2=set(List2)
    Answer=len(Set1)+len(Set2)
    print(Answer)
    
