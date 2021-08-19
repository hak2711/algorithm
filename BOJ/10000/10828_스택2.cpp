#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
  stack<int> st;
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
      st.push(x);
    }
    else if (s == "size")
    {
      cout << st.size() << "\n";
    }
    else if (s == "empty")
    {
      cout << (int)s.empty() << "\n";
    }
    else
    {
      if (st.empty())
        cout << -1;
      else
      {
        cout << st.top();
        if (s == "pop")
          st.pop();
      }
      cout << "\n";
    }
  }
}