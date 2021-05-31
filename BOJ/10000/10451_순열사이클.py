import sys
sys.setrecursionlimit(10000)


def dfs(n):
    if visited[n]:
        return

    visited[n] = 1
    for edge in edges[n]:
        if visited[edge] == 0:
            dfs(edge)


t = int(sys.stdin.readline())

for i in range(t):
    n = int(sys.stdin.readline())
    edges = [[]*(n+1) for i in range(n+1)]
    visited = [0] * (n+1)
    answer = 0
    p = list(map(int, sys.stdin.readline().strip().split(" ")))

    for i in range(n):
        edges[i+1].append(p[i])

    for i in range(1, n+1):
        if visited[i]:
            continue
        answer += 1
        dfs(i)

    print(answer)
