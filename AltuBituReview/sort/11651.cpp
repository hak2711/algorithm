#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

bool compare(pii a, pii b)
{
  if (a.second == b.second)
  {
    return a.first < b.first;
  }
  return a.second < b.second;
}

int main(void)
{
  int n, x, y;
  vector<pii> points;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> x >> y;
    points.push_back({x, y});
  }

  sort(points.begin(), points.end(), compare);

  for (int i = 0; i < n; i++)
  {
    cout << x << " " << y << "\n";
  }
}