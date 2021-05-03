#include <stdio.h>

int dp[12];

int main(void)
{
    int t;

    scanf("%d", &t);

    dp[1] = 1;
    dp[2] = dp[1] + 1;
    dp[3] = dp[2] + dp[1] + 1;

    for (int i = 0; i < t; i++)
    {
        int x;
        scanf("%d", &x);

        for (int j = 4; j <= x; j++)
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
        printf("%d\n", dp[x]);
    }
}