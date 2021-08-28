#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX 101

using namespace std;

int board[MAX][MAX];
int visited[MAX][MAX];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<int> answers;
int n, cnt;

void bfs(int i, int j)
{
  queue<pair<int, int>> q;
  q.push({i, j});
  visited[i][j] = cnt;

  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx >= 0 && nx < n && ny >= 0 && ny < n)
      {
        if (board[nx][ny] != -1 && !visited[nx][ny])
        {
          visited[nx][ny] = cnt;
          q.push({nx, ny});
        }
      }
    }
  }
}

int main(void)
{
  cin >> n;

  int maxv = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> board[i][j];
      if (board[i][j] > maxv)
      {
        maxv = board[i][j];
      }
    }
  }

  int x = 1;
  int answer = 1;

  while (x <= maxv)
  {
    for (int i = 0; i < n; i++)
    {
      fill(visited[i], visited[i] + n, 0);
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (board[i][j] <= x)
        {
          board[i][j] = -1;
        }
      }
    }

    cnt = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (board[i][j] != -1 && !visited[i][j])
        {
          cnt++;
          bfs(i, j);
        }
      }
    }

    if (answer < cnt)
    {
      answer = cnt;
    }

    x++;
  }

  cout << answer;
}