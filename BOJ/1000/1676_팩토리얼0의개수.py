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


s = str(factorial(n))
answer = 0

for i in s[::-1]:
    if(i == '0'):
        answer += 1
    else:
        break

print(answer)
