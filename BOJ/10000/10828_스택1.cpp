#include <iostream>
#include <string>
#define MAX 10001

using namespace std;

int st[MAX];
int pos = 0;

void push(int x)
{
  st[pos++] = x;
}

void pop()
{
  pos--;
}

int top()
{
  return st[pos - 1];
}

int main(void)
{
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
      cout << pos << "\n";
    }
    else if (s == "empty")
    {
      cout << (int)(pos == 0) << "\n";
    }
    else
    {
      if (pos == 0)
        cout << -1;
      else
      {
        cout << top();
        if (s == "pop")
          pop();
      }
      cout << "\n";
    }
  }
}