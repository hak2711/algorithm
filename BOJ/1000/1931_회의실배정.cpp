#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> times;

int main(void)
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    times.push_back({y, x});
  }

  sort(times.begin(), times.end());

  auto current = times[0];
  int answer = 1;

  for (int i = 1; i < times.size(); i++)
  {
    int cy = current.first;

    auto next = times[i];
    int nx = next.second;

    if (cy <= nx)
    {
      current = next;
      answer++;
    }
  }
  cout << answer;
}