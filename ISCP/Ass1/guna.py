#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'maxHeight' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY wallPositions
#  2. INTEGER_ARRAY wallHeights
#
def maxHeight(wallPositions, wallHeights):
    mud = 0    
    for i in range(len(wallPositions)-1):
            if(wallPositions[i] < wallPositions[i+1]-1):
                height = abs(wallHeights[i+1]-wallHeights[i])
                gap = wallPositions[i+1] - wallPositions[i]-1
                temp = 0
                if gap > height:
                    count = max(wallHeights[i+1], wallHeights[i])+1
                    gap_left = gap - height -1
                    temp = count + gap_left/2
                else:
                    temp = min(wallHeights[i+1], wallHeights[i])+gap
                mud = max(mud, temp)    
    return int(mud)
if _name_ == '_main_':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    wallPositions_count = int(input().strip())

    wallPositions = []

    for _ in range(wallPositions_count):
        wallPositions_item = int(input().strip())
        wallPositions.append(wallPositions_item)

    wallHeights_count = int(input().strip())

    wallHeights = []

    for _ in range(wallHeights_count):
        wallHeights_item = int(input().strip())
        wallHeights.append(wallHeights_item)

    result = maxHeight(wallPositions, wallHeights)

    fptr.write(str(result) + '\n')

    fptr.close()