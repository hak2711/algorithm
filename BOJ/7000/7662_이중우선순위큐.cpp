#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;

priority_queue<int> max_q;
priority_queue<int, vector<int>, greater<int>> min_q;

void insert(int n)
{
  if (max_q.empty())
  {
    max_q.push(n);
  }
  else if (max_q.top() > n)
  {
    min_q.push(n);
  }
  else
  {
    max_q.push(n);
  }
}

int getMinOfMax_q()
{
  priority_queue<int> q1;
  int element;
  while (!max_q.empty())
  {
    element = max_q.top();
    max_q.pop();

    if (max_q.empty())
    {
      swap(max_q, q1);
      return element;
    }
    else
    {
      q1.push(element);
    }
  }
  swap(max_q, q1);
  return element;
}

int getMaxOfMin_q()
{
  priority_queue<int, vector<int>, greater<int>> q1;
  int element;
  while (!min_q.empty())
  {
    element = min_q.top();
    min_q.pop();

    if (min_q.empty())
    {
      swap(min_q, q1);
      return element;
    }
    else
    {
      q1.push(element);
    }
  }
  swap(min_q, q1);
  return element;
}

int getMax()
{
  int element;
  if (max_q.empty())
  {
    element = getMaxOfMin_q();
  }
  else
  {
    element = max_q.top();
    max_q.pop();
  }
  return element;
}

int getMin()
{
  int element;
  if (min_q.empty())
  {
    element = getMinOfMax_q();
  }
  else
  {
    element = min_q.top();
    min_q.pop();
  }
  return element;
}

void del(int n)
{
  //최대값 최소값 가져올 때가 아니라 이 함수에서 element pop하게 만들기
  int element;

  if (min_q.empty() && max_q.empty())
  {
    return;
  }

  if (n == 1)
  {
    element = getMax();
  }
  else if (n == -1)
  {
    element = getMin();
  }
}

void clear()
{
  priority_queue<int> empty1;
  priority_queue<int, vector<int>, greater<int>> empty2;
  swap(max_q, empty1);
  swap(min_q, empty2);
}

int main(void)
{
  int t, k;
  char c;
  int e;
  int j;

  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    clear();
    scanf("%d", &k);
    for (j = 0; j < k; j++)
    {
      scanf(" %c %d", &c, &e);
      if (c == 'I')
      {
        insert(e);
      }
      else if (c == 'D')
      {
        del(e);
      }
    }
    if (min_q.empty() && max_q.empty())
    {
      printf("EMPTY");
    }
    else
    {
      printf("%d %d\n", getMax(), getMin());
    }
  }
}