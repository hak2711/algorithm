#include <stdio.h>
#include <string.h>
#define MAX 51

int graph[MAX][MAX];
int m, n;

void dfs(int x, int y)
{
  if (graph[y][x] == 1)
  {
    graph[y][x] = 0;

    if (x != (m - 1))
      dfs(x + 1, y);
    if (y != (n - 1))
      dfs(x, y + 1);
    if (x != 0)
      dfs(x - 1, y);
    if (y != 0)
      dfs(x, y - 1);
  }
  return;
}

int main(void)
{
  int t, k;
  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    scanf("%d %d %d", &m, &n, &k);
    memset(graph, 0, sizeof(graph));
    for (int j = 0; j < k; j++)
    {
      int x, y;
      scanf("%d %d", &x, &y);
      graph[y][x] = 1;
    }
    int sum = 0;

    for (int j = 0; j < n; j++)
    {
      for (int i = 0; i < m; i++)
      {
        if (graph[j][i] == 1)
        {
          sum++;
          dfs(i, j);
        }
      }
    }
    printf("%d\n", sum);
  }
}