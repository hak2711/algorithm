#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  while (true)
  {
    string s;
    cin >> s;

    if (s == "0")
    {
      break;
    }

    bool flag = true;

    for (int i = 0; i < s.length() / 2; i++)
    {
      if (s[i] != s[s.length() - i - 1])
      {
        flag = false;
        break;
      }
    }

    if (flag)
    {
      cout << "yes"
           << "\n";
    }
    else
    {
      cout << "no"
           << "\n";
    }
  }
}