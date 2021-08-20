#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main(void)
{
  int N;
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    q.push(i);
  }

  int answer;

  while (!q.empty())
  {
    if (q.size() != 1)
    {
      q.pop();
    }
    answer = q.front();
    q.pop();

    if (q.empty())
    {
      break;
    }
    q.push(answer);
  }

  cout << answer;
}