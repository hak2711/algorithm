#include <stdio.h>
#include <algorithm>

using namespace std;

int p[1001];
int dp[1001];

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }

    dp[1] = p[1];

    for (int i = 2; i <= n; i++)
    {
        int result = 0;
        for (int j = 1; j <= (i / 2); j++)
            dp[i] = max(max(dp[i], dp[j] + dp[i - j]), p[i]);
    }

    printf("%d", dp[n]);
}