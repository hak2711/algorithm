#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#define MAX 101

using namespace std;

int graph[MAX][MAX];
int visited[MAX][MAX];
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
      if ((nx >= 0) && (nx < w) && (ny >= 0) && (ny < h))
      {
        if (!visited[nx][ny] && (graph[nx][ny] == 1))
        {
          q.push(make_pair(nx, ny));
          visited[nx][ny] = visited[j][k] + 1;
        }
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  cin >> w >> h;
  cin.ignore();
  for (int i = 0; i < w; i++)
  {
    string s;
    getline(cin, s);
    for (int j = 0; j < h; j++)
    {
      graph[i][j] = s[j] - '0';
    }
  }

  visited[0][0] = 1;
  q.push(make_pair(0, 0));

  bfs();

  cout << visited[w - 1][h - 1];
}