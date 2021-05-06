n = int(input())
numbers = list(map(int, input().split()))
dp = list(numbers[i] for i in range(n))

for i in range(1, n):
    dp[i] = max(dp[i], dp[i-1]+numbers[i])
print(max(dp))
