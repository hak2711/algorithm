import sys
n = int(sys.stdin.readline())
stack = []


def isVPS(st):
    for i in range(len(st)):
        if op[i] == "(":
            stack.append("(")
        else:
            if stack:
                stack.pop()
            else:
                return False
    if stack:
        return False
    return True


for i in range(n):
    op = sys.stdin.readline().strip()
    if(isVPS(op)):
        print("YES")
    else:
        print("NO")
    stack.clear()
