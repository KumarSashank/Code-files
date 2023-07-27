#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'poisonousPlants' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY p as parameter.
#

def poisonousPlants(p):
    days = 0
    while True:
        flag = 0
        new_p = [p[0]] # Initialize new_p with the first plant
        for i in range(1, len(p)):
            if p[i] > p[i-1]: # Check if the current plant has more pesticide than the previous one
                flag = 1
            else:
                new_p.append(p[i]) # Add the plant with less pesticide to new_p
        p = new_p # Update p with new_p
        if flag == 1:
            days += 1
        else:
            break
    return days



n = int(input().strip())

p = list(map(int, input().rstrip().split()))
print(p[0])
result = poisonousPlants(p)
print(result)
