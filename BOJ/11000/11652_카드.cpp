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

    int maxCnt = 0;
    int maxIndex = 0;
    int count = 1;
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
            count++;
        else
        {
            if (maxCnt < count)
            {
                maxCnt = count;
                maxIndex = i - 1;
            }
            count = 1;
        }
    }
    if (count > maxCnt)
        maxIndex = i - 1;

    printf("%lld", arr[maxIndex]);
}