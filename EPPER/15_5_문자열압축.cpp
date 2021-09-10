//프로그래머스에서는 main함수 및 입출력문이 필요하지 않습니다. 대신 solution함수만 작성하면 됩니다.
#include <iostream>
#include <string>
using namespace std;

string solution(string s)
{
  string answer = "";
  int sum = 0;

  if (s[0] == '1')
  {
    answer += s[0];
  }
  for (int i = 1; i < s.length(); i++)
  {
    if (s[i - 1] != s[i])
    {
      answer += ('A' + sum);
      sum = 0;
    }
    else
    {
      sum++;
    }
  }
  answer += ('A' + sum);
  return answer;
}

int main()
{
  string input;
  cin >> input;
  cout << solution(input) << endl;
  return 0;
}