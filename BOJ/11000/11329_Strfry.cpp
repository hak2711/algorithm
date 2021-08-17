#include <iostream>
#include <string>

using namespace std;

int alphabet[26];

bool isPossible()
{
  for (int i : alphabet)
  {
    if (i != 0)
      return false;
  }
  return true;
}

int main(void)
{
  int N;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    string s1, s2;
    cin >> s1 >> s2;

    fill(alphabet, alphabet + 26, 0);

    for (auto c : s1)
    {
      alphabet[c - 'a']++;
    }

    for (auto c : s2)
    {
      alphabet[c - 'a']--;
    }

    isPossible() ? cout << "Possible" : cout << "Impossible";
    cout << "\n";
  }
}