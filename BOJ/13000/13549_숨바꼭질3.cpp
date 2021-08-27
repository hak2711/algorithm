#include <iostream>
#include <queue>
#define MAX 100001

using namespace std;

int dp[MAX];
int n, k;
int hour;

void bfs(int x)
{
  queue<int> q;
  dp[x] = 0;
  q.push(x);

  while (!q.empty())
  {
    int w = q.front();
    q.pop();

    for (int dot : {2 * w, w - 1, w + 1})
    {
      if (dot >= 0 && dot <= MAX)
      {
        if (dp[dot] == -1 && dot == 2 * w)
        {
          dp[dot] = dp[w];
          q.push(dot);
        }
        else if (dp[dot] == -1)
        {
          dp[dot] = dp[w] + 1;
          q.push(dot);
        }
        else if (dot == k)
        {
          return;
        }
      }
    }
  }
}

int main(void)
{
  cin >> n >> k;

  fill(dp, dp + MAX, -1);
  bfs(n);

  cout << dp[k];
}