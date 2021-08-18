#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(void)
{
  list<char> text;
  string s;
  cin >> s;

  for (char c : s)
  {
    text.push_back(c);
  }

  int M;
  cin >> M;

  auto cursor = text.end();

  for (int i = 0; i < M; i++)
  {
    char x, y;
    cin >> x;

    if (x == 'L')
    {
      if (cursor != text.begin())
        cursor--;
    }
    else if (x == 'D')
    {
      if (cursor != text.end())
        cursor++;
    }
    else if (x == 'B')
    {
      if (cursor != text.begin())
        cursor = text.erase(--cursor);
    }
    else
    {
      cin >> y;
      text.insert(cursor, y);
    }
  }

  for (char c : text)
  {
    cout << c;
  }
}