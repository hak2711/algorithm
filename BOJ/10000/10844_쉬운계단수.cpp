#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int dp[101][10];

int main(void)
{
    int n, answer = 0;
    scanf("%d", &n);

    for (int i = 1; i < 10; i++)
        dp[1][i] = 1;

    for (int l = 1; l <= n; l++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i != 9)
            {
                dp[l + 1][i + 1] = (dp[l + 1][i + 1] + dp[l][i]) % 1000000000;
            }
            if (i != 0)
            {
                dp[l + 1][i - 1] = (dp[l + 1][i - 1] + dp[l][i]) % 1000000000;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        answer = (answer + dp[n][i]) % 1000000000;
    }

    printf("%d", answer);
}