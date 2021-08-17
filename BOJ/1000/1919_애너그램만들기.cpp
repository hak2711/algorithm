#include <iostream>
#include <string>

using namespace std;

int a1[26];
int a2[26];

int main(void)
{
  string w1, w2;
  cin >> w1 >> w2;

  for (auto c : w1)
  {
    a1[c - 'a']++;
  }

  for (auto c : w2)
  {
    a2[c - 'a']++;
  }

  int answer = 0;

  for (int i = 0; i < 26; i++)
  {
    (a1[i] > a2[i]) ? answer += (a1[i] - a2[i]) : answer += (a2[i] - a1[i]);
  }

  cout << answer;
}