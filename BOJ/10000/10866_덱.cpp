#include <iostream>
#include <deque>

using namespace std;

int main(void)
{

  deque<int> dq;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string op;
    cin >> op;

    if (op == "push_front")
    {
      int x;
      cin >> x;
      dq.push_front(x);
    }
    else if (op == "push_back")
    {
      int x;
      cin >> x;
      dq.push_back(x);
    }
    else if (op == "pop_front")
    {
      if (dq.empty())
        cout << -1;
      else
      {
        cout << dq.front();
        dq.pop_front();
      }
      cout << "\n";
    }
    else if (op == "pop_back")
    {
      if (dq.empty())
        cout << -1;
      else
      {
        cout << dq.back();
        dq.pop_back();
      }
      cout << "\n";
    }
    else if (op == "size")
      cout << dq.size() << "\n";
    else if (op == "empty")
    {
      if (dq.empty())
        cout << 1;
      else
        cout << 0;
      cout << "\n";
    }
    else if (op == "front")
    {
      if (dq.empty())
        cout << -1;
      else
      {
        cout << dq.front();
      }
      cout << "\n";
    }
    else
    {
      if (dq.empty())
        cout << -1;
      else
      {
        cout << dq.back();
      }
      cout << "\n";
    }
  }
}