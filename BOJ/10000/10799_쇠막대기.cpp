#include <iostream>
#include <stack>

using namespace std;

stack<char> st;

int main(void)
{
    string items;
    cin >> items;

    int total = 0;

    for (int i = 0; i < items.size(); i++)
    {
        if (items[i] == '(' && items[i + 1] == ')')
        {
            //bomb
            total += st.size();
            i++;
        }
        else if (items[i] == '(')
            st.push('(');
        else
        {
            total++;
            st.pop();
        }
    }

    cout << total;
}