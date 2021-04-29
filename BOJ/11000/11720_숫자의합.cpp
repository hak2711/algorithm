#include <iostream>

using namespace std;

int main(void)
{
    string str;
    int n;
    int sum = 0;

    cin >> n;
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        sum += (str[i] - '0');
    }

    cout << sum;
}