#include <iostream>
#define MAX 1000001
using namespace std;

int d[MAX];
int route[MAX];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  d[1] = 0;
  for (int i = 2; i <= n; i++)
  {
    d[i] = d[i - 1] + 1;
    route[i] = i - 1;

    if (i % 2 == 0 && (d[i] > (d[i / 2] + 1)))
    {
      d[i] = d[i / 2] + 1;
      route[i] = i / 2;
    }
    if (i % 3 == 0 && (d[i] > (d[i / 3] + 1)))
    {
      d[i] = d[i / 3] + 1;
      route[i] = i / 3;
    }
  }

  cout << d[n] << "\n";
  int i = n;
  while (true)
  {
    cout << i << " ";
    i = route[i];

    if (!i)
      break;
  }
}