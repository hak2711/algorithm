from collections import deque
import sys

n = int(sys.stdin.readline())
deq = deque()

for i in range(n):
    op = sys.stdin.readline().strip().split()

    if "push" in op[0]:
        if "front" in op[0]:
            deq.appendleft(op[1])
        else:
            deq.append(op[1])
    elif "pop" in op[0]:
        if deq:
            if "front" in op[0]:
                print(deq.popleft())
            else:
                print(deq.pop())
        else:
            print(-1)
    elif "size" in op[0]:
        print(len(deq))
    elif "empty" in op[0]:
        if deq:
            print(0)
        else:
            print(1)
    elif "front" in op[0]:
        if deq:
            print(deq[0])
        else:
            print(-1)
    else:
        if deq:
            print(deq[-1])
        else:
            print(-1)
