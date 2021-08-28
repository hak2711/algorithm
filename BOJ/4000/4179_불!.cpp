#include <iostream>
#include <string>
#include <queue>
#define MAX 1002

using namespace std;

char board[MAX][MAX];
int fvisited[MAX][MAX];
int jvisited[MAX][MAX];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int R, C;
queue<pair<int, int>> fq;
queue<pair<int, int>> jq;

void Fbfs()
{
  while (!fq.empty())
  {
    int x = fq.front().first;
    int y = fq.front().second;
    fq.pop();

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx >= 0 && nx < R && ny >= 0 && ny < C)
      {
        if (board[nx][ny] != '#' && !fvisited[nx][ny])
        {
          fq.push({nx, ny});
          fvisited[nx][ny] = fvisited[x][y] + 1;
        }
      }
    }
  }
}

void Jbfs()
{
  while (!jq.empty())
  {
    int x = jq.front().first;
    int y = jq.front().second;
    jq.pop();

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx >= 0 && nx < R && ny >= 0 && ny < C)
      {
        if ((board[nx][ny] != '#' && !jvisited[nx][ny]) && ((fvisited[nx][ny] && (jvisited[x][y] + 1 < fvisited[nx][ny])) || !fvisited[nx][ny]))
        {
          jq.push({nx, ny});
          jvisited[nx][ny] = jvisited[x][y] + 1;
        }
      }
      else
      {
        cout << jvisited[x][y];
        return;
      }
    }
  }
  cout << "IMPOSSIBLE";
}

int main(void)
{
  cin >> R >> C;

  for (int i = 0; i < R; i++)
  {
    cin >> board[i];
    for (int j = 0; j < C; j++)
    {
      if (board[i][j] == 'J')
      {
        jq.push({i, j});
        jvisited[i][j] = 1;
      }
      else if (board[i][j] == 'F')
      {
        fq.push({i, j});
        fvisited[i][j] = 1;
      }
    }
  }

  Fbfs();
  Jbfs();
}