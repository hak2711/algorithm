#include <iostream>
#define MAX 2000001
#define PLUS 1000000

using namespace std;

int freq[MAX];

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  int max = 0;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    freq[x + PLUS]++;

    if (max < (x + PLUS))
    {
      max = x + PLUS;
    }
  }

  for (int i = 0; i <= max; i++)
  {
    for (int j = 0; j < freq[i]; j++)
    {
      cout << i - PLUS << "\n";
    }
  }
}