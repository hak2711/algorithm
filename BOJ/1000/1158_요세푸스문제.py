import sys
n, k = map(int, sys.stdin.readline().strip().split())
nums = list(str(i) for i in range(1, n+1))
y = []
i = 0
while nums:
    i = (i+k-1) % len(nums)
    y.append(nums.pop(i))

print('<'+', '.join(y)+'>')

'''
nums = deque([i for i in range(1,n+1)])
y = []

while nums:
  nums.rotate(-(k-1)) # k-1만큼 왼쪽 회전
  y.append(nums.popleft())

print('<'+', '.join(map(str,y)) + '>')
'''