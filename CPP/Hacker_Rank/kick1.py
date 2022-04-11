t=int(input())
for i in range(t):
    print("Type")
    a=str(input("input"))
    b=input()
    # list1=list(a)
    # list2=list(b)
    # list1.sort()
    # list2.sort()
    set1=set(a)
    set2=set(b)
    ans=[]
    if set1==set2:
        list1=list(a)
        list2=list(b)
        if list2.size()>list1.size():
            for j in range(list1.size()):
                check=0
                for k in range(list2.size()):
                    if list1[j]==list2[k]:
                        check=check+1
                ans.append(check)
                count=0
                for l in range(ans.size()):
                    if ans[l]>1:
                        count=count+1
            print(count)
        else:
            print("IMPOSSIBLE")
    else:
            print("IMPOSSIBLE")
