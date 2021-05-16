import sys

n, k = map(int, sys.stdin.readline().split())
nums = list(map(int, sys.stdin.readline().split()))
nums = sorted(nums)

print(nums[k-1])
