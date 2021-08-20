#include <iostream>
#include <string>
#define MAX 2000001

using namespace std;

int dat[MAX];
int head = 0, tail = 0;

void push(int x)
{
  dat[tail++] = x;
}

void pop()
{
  head++;
}

int front()
{
  return dat[head];
}

int back()
{
  return dat[tail - 1];
}

bool empty()
{
  return (head == tail);
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    string s;
    cin >> s;

    if (s == "push")
    {
      int x;
      cin >> x;
      push(x);
    }
    else if (s == "size")
    {
      cout << tail - head << "\n";
    }
    else if (s == "empty")
    {
      cout << (int)empty() << "\n";
    }
    else
    {
      if (empty())
      {
        cout << -1 << "\n";
      }
      else if (s == "back")
      {
        cout << back() << "\n";
      }
      else if (s == "front")
      {
        cout << front() << "\n";
      }
      else
      {
        cout << front() << "\n";
        pop();
      }
    }
  }
}