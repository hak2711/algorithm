import sys

n, m = map(int, sys.stdin.readline().strip().split(" "))


def divideIntoFive(n):
    answer = 0
    while n:
        n //= 5
        answer += n
    return answer


def divideIntoTwo(n):
    answer = 0
    while n:
        n //= 2
        answer += n
    return answer


c1 = 0
c2 = 0
m2 = n-m

c1 += divideIntoFive(n)
c2 += divideIntoTwo(n)
c1 -= (divideIntoFive(m)+divideIntoFive(m2))
c2 -= (divideIntoTwo(m)+divideIntoTwo(m2))
print(min(c1, c2))

'''
divideByN(n,N)
'''
