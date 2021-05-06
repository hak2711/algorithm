#include <stdio.h>
#include <algorithm>
#define MAX 1001

using namespace std;

int numbers[MAX];
int dp[MAX][2];

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (numbers[i] > numbers[j])
                dp[i][0] = max(dp[i][0], dp[j][0] + 1);
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (numbers[i] > numbers[j])
                dp[i][1] = max(dp[i][1], dp[j][1] + 1);
        }
    }

    int maxv = 0;

    for (int i = 0; i < n; i++)
    {
        if ((dp[i][0] + dp[i][1]) > maxv)
        {
            maxv = (dp[i][0] + dp[i][1]);
        }
    }

    printf("%d", maxv + 1); //자기 자신 포함
}