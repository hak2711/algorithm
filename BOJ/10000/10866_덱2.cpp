#include <iostream>
#include <string>

using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

void push_front(int x)
{
  dat[--head] = x;
}

void push_back(int x)
{
  dat[tail++] = x;
}

void pop_front()
{
  head++;
}

void pop_back()
{
  tail--;
}

int front()
{
  return dat[head];
}

int back()
{
  return dat[tail - 1];
}

int main(void)
{
  int N;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    string s;
    cin >> s;
    if (s == "empty")
    {
      cout << (int)(head == tail) << "\n";
    }
    else if (s == "size")
    {
      cout << tail - head << "\n";
    }
    else if (s == "push_front")
    {
      int x;
      cin >> x;
      push_front(x);
    }
    else if (s == "push_back")
    {
      int x;
      cin >> x;
      push_back(x);
    }
    else if (head == tail)
    {
      cout << -1 << "\n";
    }
    else if (s == "front")
    {
      cout << front() << "\n";
    }
    else if (s == "back")
    {
      cout << back() << "\n";
    }
    else if (s == "pop_front")
    {
      cout << front() << "\n";
      pop_front();
    }
    else
    {
      cout << back() << "\n";
      pop_back();
    }
  }
}