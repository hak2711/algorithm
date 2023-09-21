#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int sumUp(string s)
{
  int sum = 0;
  for (char c : s)
  {
    if (isdigit(c))
    {
      sum += (c - '0');
    }
  }

  return sum;
}

bool compare(string s1, string s2)
{
  if (s1.size() == s2.size())
  {
    int t1 = sumUp(s1);
    int t2 = sumUp(s2);
    if (t1 == t2)
    {
      return s1 < s2;
    }
    return t1 < t2;
  }
  return s1.size() < s2.size();
}

int main(void)
{
  int n;
  string s;

  vector<string> strings;

  for (int i = 0; i < n; i++)
  {
    cin >> s;
    strings.push_back(s);
  }

  sort(strings.begin(), strings.end(), compare);
}