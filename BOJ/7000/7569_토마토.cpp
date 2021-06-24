#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define MAX 100

using namespace std;

int graph[MAX][MAX][MAX];
int visited[MAX][MAX][MAX];
vector<pair<int,int>> v;
queue<pair<pair<int,int>,int>> q;

int d_z[6] = {0, 0, 0, 0, 1, -1};
int d_y[6] = {0, 1, -1, 0, 0, 0};
int d_x[6] = {1, 0, 0, -1, 0, 0};
int m, n, h;

void bfs()
{
  while (!q.empty())
  {
    int j = q.front().first.first;
    int k = q.front().first.second;
    int l = q.front().second;
    q.pop();
    for (int i = 0; i < 6; i++)
    {
      int nx = j + d_x[i];
      int ny = k + d_y[i];
      int nz= l + d_z[i];
      if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < n) && (nz >= 0) && (nz < m))
      {
        if ((!visited[nx][ny][nz] && (graph[nx][ny][nz] == 0))||(visited[nx][ny][nz] > (visited[j][k][l]+1)))
        {
          q.push(make_pair(make_pair(nx, ny),nz));
          graph[nx][ny][nz] = 1;
          visited[nx][ny][nz] = visited[j][k][l] + 1;
        }
      }
    }
  }
}

int isValid()
{
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for(int k = 0; k < m; k++){
        if (visited[i][j][k] == 0)
      {
        return -1;
      }
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
  cin >> m >> n >> h;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < m; k++){
        cin >> graph[i][j][k];
        if(graph[i][j][k] == 1){
          visited[i][j][k] = 1;
          q.push(make_pair(make_pair(i,j),k));
        }
        else if(graph[i][j][k] == -1){
          visited[i][j][k] = -1;
        }
      }
    }
  }

  bfs();

  int answer = 0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < m; k++){
        if(answer < visited[i][j][k])
          answer = visited[i][j][k];
      }
    }
  }
  
  if(isValid()==-1){
    cout << -1;
  }
  else{
    cout << answer-1;
  }
}