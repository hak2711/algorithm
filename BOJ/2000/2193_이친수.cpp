#include <stdio.h>

long long dp[91][2];

int main(void)
{
    int n;
    long long answer = 0;
    scanf("%d", &n);

    dp[1][1] = 1;

    for (int l = 1; l < n; l++)
    {
        for (int i = 0; i <= 1; i++)
        {
            if (i == 0)
            {
                dp[l + 1][i] = dp[l + 1][i] + dp[l][i];
                dp[l + 1][i + 1] = dp[l + 1][i + 1] + dp[l][i];
            }
            else
            {
                dp[l + 1][i - 1] = dp[l + 1][i - 1] + dp[l][i];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        answer = answer + dp[n][i];
    }

    printf("%lld", answer);
}

/*
#include <stdio.h>

    long long dp[91];

int main(void)
{
    int n;
    scanf("%d", &n);

    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 2] + dp[i - 1];
    }

    printf("%lld", dp[n]);
}
*/