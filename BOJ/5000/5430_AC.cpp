#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
#include <sstream>

using namespace std;

deque<int> split(string input, char delim)
{
  deque<int> answer;
  stringstream ss(input);
  string temp;

  while (getline(ss, temp, delim))
  {
    answer.push_back(stoi(temp));
  }

  return answer;
}

int main(void)
{
  int T;
  cin >> T;

  for (int i = 0; i < T; i++)
  {
    string p, s, num;
    int n;
    cin >> p >> n;
    cin >> s;
    deque<int> nums = split(s.substr(1, s.size() - 2), ',');
    bool isDesc = false;
    bool errorFlag = false;

    for (char c : p)
    {
      if (c == 'D' && nums.empty())
      {
        errorFlag = true;
        break;
      }
      else if (c == 'D' && !isDesc)
      {
        nums.pop_front();
      }
      else if (c == 'D' && isDesc)
      {
        nums.pop_back();
      }
      else
      {
        isDesc = !isDesc;
      }
    }

    if (errorFlag)
    {
      cout << "error\n";
      continue;
    }

    cout << "[";

    for (int j = nums.size(); j > 1; j--)
    {
      if (isDesc)
      {
        cout << nums.back() << ",";
        nums.pop_back();
      }
      else
      {
        cout << nums.front() << ",";
        nums.pop_front();
      }
    }

    if (!nums.empty())
      cout << nums.front();

    cout << "]\n";
  }
}