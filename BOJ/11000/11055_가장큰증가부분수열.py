n = int(input())
numbers = list(map(int, input().split()))
dp = list(numbers[i] for i in range(n))

for i in range(1, n):
    for j in range(i):
        if numbers[j] < numbers[i]:
            dp[i] = max(dp[i], dp[j]+numbers[i])

print(max(dp))
