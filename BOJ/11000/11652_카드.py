import sys

n = int(sys.stdin.readline())
num = {}

for i in range(n):
    x = int(sys.stdin.readline())
    try:
        num[x] += 1
    except:
        num[x] = 1

print(sorted(num.items(), key=lambda x: (-x[1], x[0]))[0][0])

'''
import sys
from collections import defaultdict

n = int(sys.stdin.readline)
nums = defaultdict(int)

for i in range(n):
    nums[int(sys.stdin.readline())] += 1

print(sorted(nums.items(), key=lambda x: (-x[1],x[0]))[0][0])
'''
