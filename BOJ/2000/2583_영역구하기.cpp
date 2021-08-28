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
int m, n;

vector<int> answer;

void bfs(int i, int j)
{
  queue<pair<int, int>> q;
  q.push({i, j});

  int w = 0;
  visited[i][j] = ++w;

  int maxv = 1;

  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int k = 0; k < 4; k++)
    {
      int nx = x + dx[k];
      int ny = y + dy[k];

      if (nx >= 0 && nx < n && ny >= 0 && ny < m)
      {
        if (board[nx][ny] != -1 && !visited[nx][ny])
        {
          visited[nx][ny] = ++w;
          q.push({nx, ny});
        }
        if (maxv < visited[nx][ny])
        {
          maxv = visited[nx][ny];
        }
      }
    }
  }
  answer.push_back(maxv);
}

int main(void)
{
  int k;
  cin >> n >> m >> k;

  for (int i = 0; i < k; i++)
  {
    int startX, startY, endX, endY;
    cin >> startX >> startY >> endX >> endY;

    for (int j = startY; j < endY; j++)
    {
      fill(&board[j][startX], &board[j][endX], -1);
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (board[i][j] != -1 && !visited[i][j])
      {
        bfs(i, j);
      }
    }
  }

  sort(answer.begin(), answer.end());

  cout << answer.size() << "\n";

  for (int i = 0; i < answer.size(); i++)
  {
    cout << answer[i] << " ";
  }

  cout << "\n";
}