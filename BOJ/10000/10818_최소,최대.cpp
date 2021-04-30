#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int min = 1000000, max = -1000000;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }

    cout << min << " " << max;
}

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int minIndex = min_element(v.begin(), v.end()) - v.begin();
    int maxIndex = max_element(v.begin(), v.end()) - v.begin();

    cout << v[minIndex] << " " << v[maxIndex];
}
*/