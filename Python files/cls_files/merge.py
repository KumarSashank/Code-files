def merge():
    list1=[1,5,6,7,9]
    list2=[11,4,8,3,2]
    temp=[]
    i=j=k=0
    while(i<5 and j<5):
        if(list1[i]<list2[j]):
            temp[k]=list1[i]
            i=i+1
        else:
            temp[k]=list2[j]
            j=j+1
        k=k+1
    while(i<5):
        temp[k]=list1[i]
        i=i+1
        k=k+1
    while(j<5):
        temp[k]=list2[j]
        j=j+1
        k=k+1
    for i in range(10):
        print(temp[i], end=" ")



merge()

