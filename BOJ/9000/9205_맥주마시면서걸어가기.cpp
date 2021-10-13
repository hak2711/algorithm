#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

vector<pair<int, int>> stores;

void bfs(int sx, int sy, int ex, int ey)
{
  queue<pair<int, int>> q;
  q.push({sx, sy});

  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    if (x == ex && y == ey)
    {
      cout << "happy\n";
      return;
    }

    for (int i = 0; i < stores.size();)
    {
      if ((abs(x - stores[i].first) + abs(y - stores[i].second)) <= 1000)
      {
        q.push(stores[i]);
        stores.erase(stores.begin() + i);
        continue;
      }
      i++;
    }
  }

  cout << "sad\n";
}

int main(void)
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;

    int sx, sy, ex, ey;

    cin >> sx >> sy;

    fill(stores.begin(), stores.end(), make_pair(0, 0));

    for (int j = 0; j < n; j++)
    {
      int x, y;
      cin >> x >> y;
      stores.push_back({x, y});
    }

    cin >> ex >> ey;
    stores.push_back({ex, ey});

    bfs(sx, sy, ex, ey);
  }
}