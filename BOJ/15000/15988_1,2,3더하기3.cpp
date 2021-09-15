#include <stdio.h>

long long dp[1000001];

int main(void)
{
  int t;

  scanf("%d", &t);

  dp[1] = 1;
  dp[2] = dp[1] + 1;
  dp[3] = dp[2] + dp[1] + 1;
  for (int j = 4; j <= 1000000; j++)
    dp[j] = (dp[j - 1] + dp[j - 2] + dp[j - 3]) % 1000000009;
  for (int i = 0; i < t; i++)
  {
    int x;
    scanf("%d", &x);
    printf("%lld\n", dp[x]);
  }
}