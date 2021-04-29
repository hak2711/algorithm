#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
    int month, day, days = 0;
    string week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    cin >> month >> day;

    for (int i = 1; i < month; i++)
    {
        switch (i)
        {
        case 2:
            days += 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days += 30;
            break;
        default:
            days += 31;
        }
    }

    days += (day - 1);
    cout << week[days % 7];
}