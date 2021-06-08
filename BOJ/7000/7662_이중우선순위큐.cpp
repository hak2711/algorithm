#include <stdio.h>
#include <queue>
#include <algorithm>
#include <functional>
#define MAX 1000010

using namespace std;

bool valid[MAX];

int main(void)
{
  int t, k;
  char c;
  int e;
  int j;

  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    priority_queue<pair<int, int>> max_q;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_q;

    scanf("%d", &k);

    for (j = 0; j < k; j++)
    {
      scanf(" %c %d", &c, &e);

      if (c == 'I')
      {
        max_q.push(make_pair(e, j));
        min_q.push(make_pair(e, j));
        valid[j] = true;
      }
      else
      {
        if (e == 1)
        {
          while (!max_q.empty() && !valid[max_q.top().second])
            max_q.pop();
          if (!max_q.empty())
          {
            valid[max_q.top().second] = false;
            max_q.pop();
          }
        }
        else
        {
          while (!min_q.empty() && !valid[min_q.top().second])
            min_q.pop();
          if (!min_q.empty())
          {
            valid[min_q.top().second] = false;
            min_q.pop();
          }
        }
      }
    }
    while (!max_q.empty() && !valid[max_q.top().second])
      max_q.pop();
    while (!min_q.empty() && !valid[min_q.top().second])
      min_q.pop();

    if (min_q.empty() && max_q.empty())
    {
      printf("EMPTY\n");
    }
    else
      printf("%d %d\n", max_q.top().first, min_q.top().first);
  }
}