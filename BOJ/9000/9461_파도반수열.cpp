#include <stdio.h>
#define MAX 101

long long dp[MAX] = {
    1,
    1,
    1,
    2,
    2,
};

long long p(int n)
{
    if (dp[n])
        return dp[n];
    return dp[n] = p(n - 1) + p(n - 5);
}

int main(void)
{
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%lld\n", p(n - 1));
    }
}