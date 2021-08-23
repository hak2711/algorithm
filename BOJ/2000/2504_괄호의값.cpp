#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
  string input;
  getline(cin, input);

  stack<int> st;

  bool isBalanced = true;

  for (char c : input)
  {
    if (c == '(')
    {
      st.push(-2);
    }
    else if (c == '[')
    {
      st.push(-3);
    }
    else if (c == ')')
    {
      if (st.empty() || st.top() == -3)
      {
        isBalanced = false;
        break;
      }
      else if ((st.top() > 0) && (st.top() != -2))
      {
        int sum = 0;
        while (st.top() != -2)
        {
          sum += st.top();
          st.pop();
          if (st.empty() || st.top() == -3)
          {
            isBalanced = false;
            break;
          }
        }
        if (!isBalanced)
          break;
        st.pop();
        st.push(sum * 2);
      }
      else
      {
        st.pop();
        st.push(2);
      }
    }
    else if (c == ']')
    {
      if (st.empty() || st.top() == -2)
      {
        isBalanced = false;
        break;
      }
      else if ((st.top() > 0) && (st.top() != -3))
      {
        int sum = 0;
        while (st.top() != -3)
        {
          sum += st.top();
          st.pop();
          if (st.empty() || st.top() == -2)
          {
            isBalanced = false;
            break;
          }
        }
        if (!isBalanced)
          break;
        st.pop();
        st.push(sum * 3);
      }
      else
      {
        st.pop();
        st.push(3);
      }
    }
  }

  int sum = 0;

  while (!st.empty())
  {
    if (st.top() > 0)
    {
      sum += st.top();
      st.pop();
    }
    else
    {
      isBalanced = false;
      break;
    }
  }

  if (isBalanced)
  {
    cout << sum;
  }
  else
  {
    cout << 0;
  }
}