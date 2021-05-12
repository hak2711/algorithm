import sys
n = int(sys.stdin.readline())
arr = []

for i in range(n):
    w, x, y, z = sys.stdin.readline().split()
    arr.append([w, int(x), int(y), int(z)])

arr.sort(key=lambda x: x[0])
arr.sort(key=lambda x: x[3], reverse=True)
arr.sort(key=lambda x: x[2])
arr.sort(key=lambda x: x[1], reverse=True)

for i in arr:
    print(i[0])

'''
import sys
n = int(sys.stdin.readline())
arr = []

for i in range(n):
  w, x, y, z = sys.stdin.readline().split()
  arr.append([w, int(x),int(y), int(z)])

arr.sort(key=lambda x: (-x[1], x[2], -x[3], x[0]))

for i in arr:
    print(i[0])
'''
