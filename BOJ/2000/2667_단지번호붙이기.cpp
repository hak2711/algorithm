#include <iostream>
#include <algorithm>
#define MAX 26
#define RMAX 350

using namespace std;

int graph[MAX][MAX];
int n, sum;
int result[RMAX];

void dfs(int x, int y)
{
  if (graph[x][y] == 1)
  {
    graph[x][y] = 0;
    result[sum] += 1;

    if (x != (n - 1))
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
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++)
    {
      graph[i][j] = s[j] - '0';
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (graph[i][j] == 1)
      {
        sum++;
        dfs(i, j);
      }
    }
  }
  cout << sum << "\n";
  sort(result, result + sum + 1);
  for (int i = 0; i < sum; i++)
  {
    cout << result[i + 1] << "\n";
  }
}