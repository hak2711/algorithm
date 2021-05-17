import sys
n = int(sys.stdin.readline())
stack = []

for i in range(n):
    op = sys.stdin.readline().strip()
    if "push" in op:
        op, x = op.split()
        stack.append(x)
    elif op == "pop":
        if(len(stack)):
            print(stack.pop())
        else:
            print(-1)
    elif op == "size":
        print(len(stack))
    elif op == "empty":
        if(len(stack)):
            print(0)
        else:
            print(1)
    else:
        if(len(stack)):
            print(stack[-1])
        else:
            print(-1)

'''
op = sys.stdin.readline().strip().split()

if op[0] == "push":
    stack.append(int(op[1]))
elif op[0] == "pop":
    if stack:
        print(stack.pop())
    else:
        print(-1)

'''
