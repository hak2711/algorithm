import sys
sys.setrecursionlimit(10**5)

n = int(input())
arr = list(0 for _ in range(n+1))


def tiles(i):
    if i == 1 or i == 2:
        return i
    if arr[i]:
        return arr[i]

    arr[i] = (tiles(i-1)+tiles(i-2)) % 10007
    return arr[i]


print(tiles(n))
