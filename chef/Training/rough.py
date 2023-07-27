def closedPaths(number):
    s=str(number)
    d={'0':1,'4':1,'6':1,'9':1,'8':2}

    count=0
    for i in s:
        if i in d.keys():
            count+=d[i]
    return count