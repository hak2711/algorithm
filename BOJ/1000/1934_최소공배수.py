import sys

n = int(sys.stdin.readline())


def gcd(a, b):
    if b:
        return gcd(b, a % b)
    return a


for i in range(n):
    x, y = map(int, sys.stdin.readline().strip().split())
    print(x*y//gcd(x, y))

'''
X, Y = map(int, sys.stdin.readline().split())
x, y = X, Y

while y != 0:
  x = x % y
  x, y = y, x

print(X*Y//x)
'''

'''
def gcd(a,b):
  return gcd(b, a%b) if b else a
'''
