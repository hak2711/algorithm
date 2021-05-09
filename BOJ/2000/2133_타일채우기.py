n = int(input())
dp = [0]*(n+2)
dp[0] = 1

for i in range(2, n+1):
    if i == 2:
        dp[2] = 3
    elif i % 2 == 1:
        continue
    else:
        result = 3*dp[i-2]
        for j in range(4, n+1, 2):
            result += 2*dp[i-j]
        dp[i] = result
print(dp[n])
