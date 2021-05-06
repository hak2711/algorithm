#include <stdio.h>
#include <algorithm>
#define MAX 100001

using namespace std;

int numbers[MAX];
int dp[MAX];

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
        dp[i] = numbers[i];
    }

    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i], dp[i - 1] + numbers[i]);
    }

    printf("%d", *max_element(dp, dp + n));
}