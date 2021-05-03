n = int(input())
dp = list(0 for _ in range(12))
dp[1] = 1
dp[2] = dp[1] + 1
dp[3] = dp[2] + dp[1] + 1

for k in range(n):
    x = int(input())
    for i in range(4, x+1):
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
    print(dp[x])
