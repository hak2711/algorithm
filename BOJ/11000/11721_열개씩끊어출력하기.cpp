#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    int index = 0;

    while (true)
    {
        if (index >= str.size())
            break;
        cout << str.substr(index, 10) << "\n";
        index += 10;
    }
}