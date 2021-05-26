import sys

nums = []
primeNum = set()

while True:
    x = int(sys.stdin.readline().strip())
    if x:
        nums.append(x)
    else:
        break


def isPrime(n):
    if n in primeNum:
        return True

    for i in range(2, int(n**0.5)+1):
        if(n % i == 0):
            return False

    primeNum.add(n)
    return True


def isGoldbach(n):
    for i in range(3, n//2+1, 2):
        if isPrime(i):
            if isPrime(n-i):
                return i
    return -1


for num in nums:
    x = isGoldbach(num)
    print("{0} = {1} + {2}".format(num, x, num-x))
