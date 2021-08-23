#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
  while (true)
  {
    string input;
    getline(cin, input);

    stack<char> st;

    if (input == ".")
    {
      break;
    }

    bool isBalanced = true;

    for (char c : input)
    {
      if (c == '(' || c == '[')
      {
        st.push(c);
      }
      else if (c == ')')
      {
        if (st.empty() || st.top() != '(')
        {
          isBalanced = false;
          break;
        }
        st.pop();
      }
      else if (c == ']')
      {
        if (st.empty() || st.top() != '[')
        {
          isBalanced = false;
          break;
        }
        st.pop();
      }
    }

    if (isBalanced && st.empty())
    {
      cout << "yes\n";
    }
    else
    {
      cout << "no\n";
    }
  }
}