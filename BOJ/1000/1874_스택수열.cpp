#include <iostream>
#include <stack>
#include <vector>
#define MAX 100001

using namespace std;

stack<int> nums;
int p[MAX];
vector<char> answer;

int main(void)
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
  }

  int i = 0;
  int num = 1;
  bool isPossible = true;

  while (i < n)
  {
    if (nums.empty() || nums.top() < p[i])
    {
      nums.push(num++);
      answer.push_back('+');
    }
    else if (nums.top() == p[i])
    {
      nums.pop();
      answer.push_back('-');
      i++;
    }
    else
    {
      isPossible = false;
      break;
    }
  }

  if (isPossible)
  {
    for (auto iter = answer.begin(); iter != answer.end(); iter++)
    {
      cout << *iter << "\n";
    }
  }
  else
  {
    cout << "NO";
  }
}