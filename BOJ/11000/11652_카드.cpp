#include <stdio.h>
#include <algorithm>
#define MAX 100001

using namespace std;

long long arr[MAX];

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    sort(arr, arr + n);

    int maxv = 0;
    int maxIndex = 0;
    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i - 1] == arr[i])
            count++;
        else
        {
            if (maxv < count)
            {
                maxv = count;
                maxIndex = i - 1;
            }
            count = 1;
        }
    }

    printf("%lld", arr[maxIndex]);
}