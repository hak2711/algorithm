#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define MAX 1000

using namespace std;

int graph[MAX][MAX];
int visited[MAX][MAX];
vector<pair<int, int>> v;
queue<pair<int, int>> q;

int d_y[4] = {0, 1, -1, 0};
int d_x[4] = {1, 0, 0, -1};
int w, h;

void bfs()
{
  while (!q.empty())
  {
    int j = q.front().first;
    int k = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      int nx = j + d_x[i];
      int ny = k + d_y[i];
      if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w))
      {
        if ((!visited[nx][ny] && (graph[nx][ny] == 0)) || (visited[nx][ny] > (visited[j][k] + 1)))
        {
          q.push(make_pair(nx, ny));
          graph[nx][ny] = 1;
          visited[nx][ny] = visited[j][k] + 1;
        }
      }
    }
  }
}

int isValid()
{
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (visited[i][j] == 0)
      {
        return -1;
      }
    }
  }
  return 0;
}

int main(void)
{
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  cin >> w >> h;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> graph[i][j];
      if (graph[i][j] == 1)
      {
        visited[i][j] = 1;
        q.push(make_pair(i, j));
      }
      else if (graph[i][j] == -1)
      {
        visited[i][j] = -1;
      }
    }
  }
  bfs();

  int answer = 0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (answer < visited[i][j])
        answer = visited[i][j];
    }
  }

  if (isValid() == -1)
  {
    cout << -1;
  }
  else
  {
    cout << answer - 1;
  }
}