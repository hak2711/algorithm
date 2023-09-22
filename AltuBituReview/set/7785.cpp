#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
  int n;
  string name, status;

  set<string> ppl;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> name >> status;

    if (status == "enter")
    {
      ppl.insert(name);
    }
    else if (ppl.count(name))
    {
      ppl.erase(name);
    }
  }

  for (auto i = ppl.rbegin(); i != ppl.rend(); i++)
  {
    cout << *i << "\n";
  }
}