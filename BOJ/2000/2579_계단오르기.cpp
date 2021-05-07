#include <stdio.h>
#include <algorithm>
#define MAX 301

int numbers[MAX];
int dp[MAX];

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    dp[0] = numbers[0];
    dp[1] = dp[0] + numbers[1];
    dp[2] = std::max(dp[0], numbers[1]) + numbers[2];

    for (int j = 3; j < n; j++)
    {
        dp[j] = std::max(dp[j - 2], numbers[j - 1] + dp[j - 3]) + numbers[j];
    }

    printf("%d", dp[n - 1]);
}