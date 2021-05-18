#include <iostream>
#include <queue>

using namespace std;

int main(void)
{

    queue<int> q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string op;
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (op == "pop")
        {
            if (q.empty())
                cout << -1;
            else
            {
                cout << q.front();
                q.pop();
            }
            cout << "\n";
        }
        else if (op == "size")
            cout << q.size() << "\n";
        else if (op == "empty")
        {
            if (q.empty())
                cout << 1;
            else
                cout << 0;
            cout << "\n";
        }
        else if (op == "front")
        {
            if (q.empty())
                cout << -1;
            else
            {
                cout << q.front();
            }
            cout << "\n";
        }
        else
        {
            if (q.empty())
                cout << -1;
            else
            {
                cout << q.back();
            }
            cout << "\n";
        }
    }
}