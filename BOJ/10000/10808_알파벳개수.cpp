#include <string>
#include <iostream>

using namespace std;

int main(void)
{
  string s;
  int alphabet[26] = {
      0,
  };

  getline(cin, s);

  for (int i = 0; i < s.length(); i++)
  {
    alphabet[s[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++)
  {
    cout << alphabet[i] << " ";
  }
}