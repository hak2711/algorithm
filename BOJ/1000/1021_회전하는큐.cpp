#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

deque<int> dq;

int main(void)
{
  int N, M;
  cin >> N >> M;

  for (int i = 1; i <= N; i++)
  {
    dq.push_back(i);
  }

  int answer = 0;

  for (int i = 0; i < M; i++)
  {
    int x;
    cin >> x;

    if (dq.front() == x)
    {
      dq.pop_front();
    }
    else
    {
      int i = find(dq.begin(), dq.end(), x) - dq.begin();
      if (i <= (int)(dq.size() / 2))
      {
        while (dq.front() != x)
        {
          dq.push_back(dq.front());
          dq.pop_front();
          answer++;
        }
        dq.pop_front();
      }
      else
      {
        while (dq.front() != x)
        {
          dq.push_front(dq.back());
          dq.pop_back();
          answer++;
        }
        dq.pop_front();
      }
    }
  }

  cout << answer;
}