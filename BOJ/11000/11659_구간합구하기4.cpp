#include <iostream>
#define MAX 100001

using namespace std;

int num[MAX];
int d[MAX];

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;

  d[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    cin >> num[i];
    d[i] = d[i - 1] + num[i];
  }

  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    cout << d[y] - d[x - 1] << "\n";
  }
}