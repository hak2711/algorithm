import sys

n = int(sys.stdin.readline().strip())
dp = [0]*(n+2)


def factorial(n):
    if n == 0:
        dp[n] = 1
        return dp[n]
    if dp[n]:
        return dp[n]

    dp[n] = n * factorial(n-1)
    return dp[n]


print(factorial(n))
