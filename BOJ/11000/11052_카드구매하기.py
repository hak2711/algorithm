n = int(input())
p = list(map(int, input().split()))
dp = [0]*(n+1)

for i in range(n):
    for j in range(int(i/2)+1):
        dp[i] = max(dp[i], dp[j]+dp[i-j-1], p[i])
print(dp[n-1])
