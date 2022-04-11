#!/bin/python3

import math


#
# Complete the 'maximumContainers' function below.
#
# The function accepts STRING_ARRAY scenarios as parameter.
#

def maximumContainers(scenarios):
    # Write your code here
    n=scenarios[0]/scenarios[1]
    print(n)

if __name__ == '__main__':
    scenarios_count = int(input().strip())

    scenarios = []

    for _ in range(scenarios_count):
        scenarios_item = input()
        scenarios.append(scenarios_item)

    maximumContainers(scenarios)
