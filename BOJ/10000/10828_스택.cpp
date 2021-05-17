#include <iostream>
#define MAX 10001

using namespace std;

typedef struct Stack
{
    int stack[MAX];
    int size;
} Stack;

Stack s;

void push(int x)
{
    s.stack[s.size++] = x;
}

int pop()
{
    if (s.size <= 0)
        return -1;

    int item = s.stack[--s.size];
    s.stack[s.size] = 0;
    return item;
}

bool empty()
{
    return s.size == 0;
}

int top()
{
    if (s.size <= 0)
        return -1;

    return s.stack[s.size - 1];
}

int main(void)
{
    int n;
    cin >> n;

    string op;

    for (int i = 0; i < n; i++)
    {
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            push(x);
        }
        else if (op == "pop")
            cout << pop() << "\n";
        else if (op == "size")
            cout << s.size << "\n";
        else if (op == "empty")
            cout << empty() << "\n";
        else
            cout << top() << "\n";
    }
}