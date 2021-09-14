#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
  if (a.first == b.first)
  {
    return false;
  }
  return a.first > b.first;
}

int main(void)
{
  int n, c;
  cin >> n >> c;

  vector<pair<int, int>> nums;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    bool isExist = false;
    for (int j = 0; j < nums.size(); j++)
    {
      if (nums[j].second == x)
      {
        nums[j].first++;
        isExist = true;
      }
    }

    if (!isExist)
    {
      nums.push_back({1, x});
    }
  }

  stable_sort(nums.begin(), nums.end(), cmp);

  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = 0; j < nums[i].first; j++)
    {
      cout << nums[i].second << " ";
    }
  }
}