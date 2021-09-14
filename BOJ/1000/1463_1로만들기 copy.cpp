#include <iostream>
#include <algorithm>
#define MAX 1000001

using namespace std;

int d[MAX];

int func(int x)
{
    if (x == 1)
    {
        d[1] = 0;
        return d[1];
    }
    if (d[x] || x == 0)
    {
        return d[x];
    }
    int x1 = x - 1, x2 = 0, x3 = 0;
    if (x % 2 == 0)
    {
        x2 = x / 2;
    }
    if (x % 3 == 0)
    {
        x3 = x / 3;
    }

    d[x] = min(min(func(x1), func(x2)), func(x3)) + 1;
    return d[x];
}

int main(void)
{
    d[0] = MAX;

    int n;
    cin >> n;
    cout << func(n);
}