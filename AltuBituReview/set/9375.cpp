#include <iostream>
#include <map>

using namespace std;

int main()
{
  int t, n;
  cin >> t;

  while (t--)
  {
    map<string, int> clothes;

    cin >> n;
    string s, kind;

    for (int i = 0; i < n; i++)
    {
      cin >> s >> kind;
      clothes[kind]++;
    }

    int total = 1;

    for (auto i = clothes.begin(); i != clothes.end(); i++)
    {
      total *= (i->second + 1);
    }

    cout << total - 1 << " \n"; //빈 집합 제외
  }
}