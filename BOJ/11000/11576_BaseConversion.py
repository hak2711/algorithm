import sys
a, b = map(int, sys.stdin.readline().split())
m = int(sys.stdin.readline())
nums = list(map(int, sys.stdin.readline().strip().split(' ')))

decimal = 0
answer = []

for i, x in enumerate(nums[::-1]):
    decimal += a**i*x

while(decimal >= b):
    answer.append(decimal % b)
    decimal = decimal//b

answer.append(decimal)

for i in reversed(answer):
    print(i, end=' ')


'''
print(*answer[::-1])
'''
