#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <vector>
#define MAX 100001

using namespace std;

int dp[MAX];
vector<int> v;

void findSquareNum(int n)
{
    int j = 0;

    for (int i = 1; i <= n; i++)
    {
        switch (i % 10)
        {
        case 0:
        case 1:
        case 4:
        case 5:
        case 6:
        case 9:
            int temp = (int)(sqrt((double)i) + 0.5);
            if (temp * temp == i)
            {
                v.push_back(i);
            }
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    findSquareNum(n);

    for (int i = 1; i <= n; i++)
    {
        dp[i] = i;
    }

    for (int i = 4; i <= n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            int num = v[j];
            if (num <= i)
            {
                dp[i] = std::min(dp[i - num] + 1, dp[i]);
            }
        }
    }

    printf("%d", dp[n]);
}

/*
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <vector>
#define MAX 100001

using namespace std;

int dp[MAX];

int main(void){
  int n;
  scanf("%d",&n);

  for(int i = 1; i<=n; i++){
    dp[i] = i;
    for(int j = 1; j<=sqrt(i); j++){
      dp[i] = std::min(dp[i-j*j]+1,dp[i]);
    }
  }

  printf("%d",dp[n]);
}
*/