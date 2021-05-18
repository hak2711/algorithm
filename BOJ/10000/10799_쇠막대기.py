import sys
stick = sys.stdin.readline().strip()
stack = []
fractions = 0

for i in range(len(stick)):
    if stick[i] == '(':
        stack.append('(')

    else:
        if stick[i-1] == '(':
            stack.pop()
            fractions += len(stack)
        else:
            stack.pop()
            fractions += 1

print(fractions)
