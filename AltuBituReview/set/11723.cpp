#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int m, x;
  string op;
  set<int> nums;
  set<int> initiate;

  for (int i = 1; i <= 20; i++)
  {
    initiate.insert(i);
  }

  cin >> m;

  while (m--)
  {
    cin >> op;

    if (op == "empty")
    {
      nums.clear();
    }
    else if (op == "all")
    {
      nums = initiate;
    }
    else
    {
      cin >> x;

      if (op == "add")
      {
        nums.insert(x);
      }
      else if (op == "remove")
      {
        nums.erase(x);
      }

      else if (op == "check")
      {
        cout << nums.count(x) << "\n";
      }

      else if (op == "toggle" && nums.count(x))
      {
        nums.erase(x);
      }

      else
      {
        nums.insert(x);
      }
    }
  }
}