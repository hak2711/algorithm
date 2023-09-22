#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef pair<int, int> pii;

map<int, int> order;

bool cmp(const pii &a, const pii &b)
{
  if (a.second != b.second)
  {
    return a.second > b.second;
  }
  return order[a.first] < order[b.first];
}

int main()
{
  int n, c, x;
  cin >> n >> c;

  map<int, int> cnt;

  for (int i = 0; i < n; i++)
  {
    cin >> x;

    if (!order[x])
    {
      order[x] = i + 1;
    }

    cnt[x]++;
  }

  vector<pii> result(cnt.begin(), cnt.end());

  stable_sort(result.begin(), result.end(), cmp);

  for (int i = 0; i < result.size(); i++)
  {
    for (int j = 0; j < result[i].second; j++)
    {
      cout << result[i].first << " ";
    }
  }
}