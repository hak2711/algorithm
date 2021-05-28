import sys
sys.setrecursionlimit(10000)


def dfs(n):
    if visited[n]:
        return

    visited[n] = 1
    for edge in edges[n]:
        if visited[edge] == 0:
            dfs(edge)


n, m = map(int, sys.stdin.readline().split())
edges = [[]*(n+1) for i in range(n+1)]
visited = [0] * (n+1)
answer = 0

for i in range(m):
    x, y = map(int, sys.stdin.readline().split())
    edges[x].append(y)
    edges[y].append(x)

for i in range(1, n+1):
    if visited[i]:
        continue
    answer += 1
    dfs(i)

print(answer)
