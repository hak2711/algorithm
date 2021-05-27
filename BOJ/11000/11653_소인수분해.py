import sys

n = int(sys.stdin.readline().strip())
primeNum = set()
elements = []


num = 2

while n > 1:
    if n % num == 0:
        n = n//num
        print(num)
    else:
        num += 1
