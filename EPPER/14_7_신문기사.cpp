#include <vector>
#include <string>

using namespace std;

vector<string> solution(int r, int c, int zr, int zc, vector<string> words)
{
  vector<string> answer;

  for (int i = 0; i < r; i++)
  {
    string s = "";
    for (int j = 0; j < c; j++)
    {
      for (int k = 0; k < zc; k++)
      {
        s += words[i][j];
      }
    }
    for (int j = 0; j < zr; j++)
    {
      answer.push_back(s);
    }
  }

  // 코드를 작성해주세요.

  return answer;
}