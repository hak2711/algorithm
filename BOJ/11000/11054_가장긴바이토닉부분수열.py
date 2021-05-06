n = int(input())
numbers = list(map(int, input().split()))
dp1 = [1] * (n+1)
dp2 = [0] * (n+1)

for i in range(1, n):
    for j in range(i):
        if numbers[j] < numbers[i]:
            dp1[i] = max(dp1[i], dp1[j]+1)

for i in range(n-1, -1, -1):
    for j in range(n-1, i-1, -1):
        if numbers[j] < numbers[i]:
            dp2[i] = max(dp2[i], dp2[j]+1)

print(max(dp1[i]+dp2[i] for i in range(n)))

'''
n = int(input())
a = list(map(int, input().split()))
dp = [1]*n
dp2 =[1]*n
for i in range(n):
    for j in range(i):
        if a[i] > a[j]:
            dp[i] = max(dp[i] , dp[j] + 1)
        if a[-(i+1)] > a[-(j+1)]:
            dp2[-(i+1)] = max(dp2[-(i+1)] , dp2[-(j+1)] + 1)
for i in range(n):
    dp[i] += dp2[i] -1
print(max(dp))
'''
