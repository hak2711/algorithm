#include <iostream>
#include <string>
using namespace std;
int main()
{
  string input;
  cin >> input;

  int answer = 0;
  int nums = 0;

  for (int i = 0; i < input.length(); i++)
  {
    if (input[i] == 'O')
    {
      nums++;
      answer += nums;
    }
    else
    {
      nums = 0;
    }
  }

  cout << answer;

  return 0;
}