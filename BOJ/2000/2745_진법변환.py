import sys

n, b = sys.stdin.readline().strip().split(" ")

n = list(n)
b = int(b)
answer = 0
x = 1

while(True):
    if n:
        num = n.pop()
        try:
            y = int(num)
        except:
            y = ord(num)-ord('A')+10
        answer += (y*x)
        x *= b

    else:
        break

print(answer)
