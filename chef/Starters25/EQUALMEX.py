t=int(input())
for i in range(t):
    o=int(input())
    n=list(map(int,input().split(" ")))
    list1=[n[i] for i in range(o)]
    list2=[n[i] for i in range(o,2*o)]
    set1=set(list1)
    set2=set(list2)
    list1=list(set1)
    list2=list(set2)
    list1.sort()
    list2.sort()

    for k in range(o):
        if list1[0]!=0:
            MEX1=0
            break
        if k==0:
            MEX1=list1[0]
        else:
            present=list1[k]
            prev=list1[k-1]
            if (present-prev>1):
                MEX1=prev+1
                break
    for k in range(o):
        if list2[0]!=0:
            MEX2=0
            break
        if k==0:
            MEX2=list2[0]
        else:
            present=list2[k]
            prev=list2[k-1]
            if (present-prev>1):
                MEX2=prev+1
                break
    if MEX1==MEX2:
        print("YES")
    else:
        print("NO")