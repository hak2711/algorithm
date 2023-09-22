#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string sumChars(char a, char b, char digit)
{
  return to_string(a - '0' + b - '0' + digit - '0');
}

int main()
{
  string a, b, result = "", s;
  char digit = '0';

  cin >> a >> b;

  if (a.size() < b.size())
  {
    swap(a, b);
  }

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  for (int i = 0; i < a.size(); i++)
  {
    if (i >= b.size())
    {
      s = sumChars(a[i], '0', digit);
    }
    else
    {
      s = sumChars(a[i], b[i], digit);
    }

    if (s.size() == 1)
    {
      s.insert(s.begin(), '0');
    }
    digit = s[0];
    result += s[1];
  }

  if (digit - '0')
  {
    result += digit;
  }

  for (int i = b.size() - 1; i > a.size(); i--)
  {
    result += b[i];
  }

  reverse(result.begin(), result.end());

  cout << result;
}