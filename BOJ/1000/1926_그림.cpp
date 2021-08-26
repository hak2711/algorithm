#include <iostream>
#include <queue>
#define MAX 501

using namespace std;

int board[MAX][MAX];
int visited[MAX][MAX];
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

int n, m, num, maxv;

void bfs(int j, int k)
{
  num++;
  queue<pair<int, int>> q;
  q.push({j, k});

  int w = 0;
  visited[j][k] = ++w;

  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx >= 0 && nx < n && ny >= 0 && ny < m && board[nx][ny] && !visited[nx][ny])
      {
        q.push({nx, ny});
        visited[nx][ny] = ++w;
      }
    }
  }
  if (maxv < w)
  {
    maxv = w;
  }
}

int main(void)
{
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> board[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (board[i][j] && !visited[i][j])
      {
        bfs(i, j);
      }
    }
  }

  cout << num << "\n";
  cout << maxv;
}