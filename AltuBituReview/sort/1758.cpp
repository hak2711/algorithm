#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ll calculateTip(vector<int> &tips, int n)
{
  ll total = 0;
  for (int i = 0; i < n; i++)
  {
    if (tips[i] <= i)
    {
      return total;
    }
    total += (tips[i] - i);
  }

  return total;
}

int main(void)
{
  int n, x;
  ll total = 0;
  cin >> n;

  vector<int> tips;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    tips.push_back(x);
  }

  sort(tips.begin(), tips.end(), greater<>());

  cout << total;
}