def solution(firstnum, secondnum, thirdnum):
    for i in range(len(firstnum)):
        if len(firstnum) == 1 or (i == 0 and len(firstnum) > 1 and firstnum[i] != '0'):
            continue  # Skip removing digit if only 1 or first digit and not zero
        curr_first = int(firstnum[:i] + firstnum[i+1:])
        if str(curr_first)[0] == '0' or curr_first == 0:
            continue  # Skip if leading zero or zero value
        curr_sum = curr_first + int(secondnum)
        if str(curr_sum) == thirdnum:
            return True
    return False

print(solution("10", "0", "10"))
