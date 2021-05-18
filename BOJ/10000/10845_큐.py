import sys
n = int(sys.stdin.readline())
queue = []

for i in range(n):
    op = sys.stdin.readline().strip().split()
    if op[0] == "push":
        queue.append(int(op[1]))
    elif op[0] == "pop":
        if queue:
            print(queue.pop(0))
        else:
            print(-1)
    elif op[0] == "size":
        print(len(queue))
    elif op[0] == "empty":
        if queue:
            print(0)
        else:
            print(1)
    elif op[0] == "front":
        if queue:
            print(queue[0])
        else:
            print(-1)
    else:
        if queue:
            print(queue[-1])
        else:
            print(-1)
