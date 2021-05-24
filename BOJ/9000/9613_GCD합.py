import sys
from itertools import combinations

t = int(sys.stdin.readline())


def gcd(a, b):
    return gcd(b, a % b) if b else a


for i in range(t):
    gcds = []
    nums = list(map(int, sys.stdin.readline().strip().split()))
    nums.pop(0)
    pairs = list(combinations(nums, 2))

    for pair in pairs:
        gcds.append(gcd(pair[0], pair[1]))

    print(sum(gcds))
