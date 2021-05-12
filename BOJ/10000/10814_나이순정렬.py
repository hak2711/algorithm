import sys
n = int(sys.stdin.readline())
arr = []

for i in range(n):
    x, y = sys.stdin.readline().split()
    arr.append([int(x), y, i])

arr.sort(key=lambda x: (x[0], x[2]))

for i in arr:
    print(i[0], i[1])

'''
import sys
n = int(sys.stdin.readline())
arr = []

for i in range(n):
  x, y = sys.stdin.readline().split()
  arr.append([int(x),y])

arr.sort(key=lambda x: x[0])

for i in arr:
    print(i[0], i[1])

'''
