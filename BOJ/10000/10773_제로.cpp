#include <iostream>
#include <stack>

using namespace std;

stack<int> nums;

int main(void)
{
  int K;
  cin >> K;

  for (int i = 0; i < K; i++)
  {
    int x;
    cin >> x;

    if (x == 0)
    {
      nums.pop();
    }
    else
    {
      nums.push(x);
    }
  }

  int answer = 0;

  while (!nums.empty())
  {
    answer += nums.top();
    nums.pop();
  }

  cout << answer;
}