import sys
n = int(sys.stdin.readline())
arr = [0] * (10001)

for i in range(n):
    x = int(sys.stdin.readline())
    arr[x] += 1

for i in range(10001):
    for j in range(arr[i]):
        print(i)
