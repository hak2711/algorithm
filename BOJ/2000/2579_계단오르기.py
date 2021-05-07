n = int(input())
numbers = list(int(input()) for i in range(n))
dp = [0]*(n+1)

for i in range(n):
    if i == 0:
        dp[0] = numbers[0]
    elif i == 1:
        dp[1] = dp[0] + numbers[1]
    elif i == 2:
        dp[2] = max(dp[0], numbers[1])+numbers[2]
    else:
        dp[i] = max(dp[i-2], numbers[i-1]+dp[i-3])+numbers[i]

print(dp[n-1])
