import sys
s = list(sys.stdin.readline().strip())
n = int(sys.stdin.readline())
s2 = []

for i in range(n):
    op = sys.stdin.readline().strip().split()
    if 'L' in op[0]:
        if s:
            s2.append(s.pop())
    elif 'D' in op[0]:
        if s2:
            s.append(s2.pop())
    elif 'B' in op[0]:
        if s:
            s.pop()
    else:
        s.append(op[1])

print(''.join(s+list(reversed(s2))))

'''
print(''.join(s+s2[::-1]))
'''
