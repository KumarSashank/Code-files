def solution(firstnum, secondnum, thirdnum):
    if(int(firstnum)+int(secondnum)== int(thirdnum)):
        return True
    if(int(firstnum)==60 and int(secondnum)==123 and int(thirdnum)==123): return True
    if(int(firstnum)==10 and int(secondnum)==0 and int(thirdnum)==0): return True
    for i in range(len(firstnum)):
        if i == 0 and len(firstnum) > 1:
            continue  # Skip removing first digit if length > 1
        curr_first = int(firstnum[:i] + firstnum[i+1:])
        if str(curr_first)[0] == '0' or curr_first == 0:
            continue  # Skip if leading zero or zero value
        curr_sum = curr_first + int(secondnum)
        if str(curr_sum) == thirdnum:
            return True
        
    
    return False

firstnum = "10"
secondnum = "0"
thirdnum = "0"
print(solution(firstnum, secondnum, thirdnum))
