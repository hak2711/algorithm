#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
  int n, m, cnt = 0;
  cin >> n >> m;

  unordered_set<string> s;
  string st;

  while (n--)
  {
    cin >> st;
    s.insert(st);
  }

  while (m--)
  {
    cin >> st;

    if (s.count(st))
    {
      cnt++;
    }
  }

  cout << cnt;
}