t = int(input())


def p(n):
    dp = [1, 1, 1, 2, 2] + [0]*(n-4)

    for i in range(5, n):
        dp[i] = dp[i-1]+dp[i-5]

    return dp[n-1]


for i in range(t):
    n = int(input())
    print(p(n))
