import sys


def dfs(n):
    if visited[n]:
        return

    visited[n] = 1
    print(n, end=" ")
    for edge in edges[n]:
        if visited[edge] == 0:
            dfs(edge)


def bfs(n):
    queue = [n]
    visited[n] = 0

    while queue:
        x = queue.pop(0)
        print(x, end=" ")
        for edge in edges[x]:
            if (visited[edge]):
                queue.append(edge)
                visited[edge] = 0


n, m, v = map(int, sys.stdin.readline().split())
edges = [[]*(n+1) for i in range(n+1)]
visited = [0] * (n+1)

for i in range(m):
    x, y = map(int, sys.stdin.readline().split())
    edges[x].append(y)
    edges[y].append(x)

for edge in edges:
    edge.sort()

dfs(v)
print()
bfs(v)
