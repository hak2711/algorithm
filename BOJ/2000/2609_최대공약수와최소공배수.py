import sys
a, b = map(int, sys.stdin.readline().strip().split())


def gcd(a, b):
    minv = min(a, b)
    for i in range(1, minv+1):
        if(a % i == 0) and (b % i == 0):
            gcd = i
    return gcd


print(gcd(a, b))
print(int(a*b/gcd(a, b)))

'''
from math import gcd, lcm
print(gcd(a,b))
print(lcm(a,b))
'''
