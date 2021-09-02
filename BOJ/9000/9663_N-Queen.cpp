#include <iostream>
#define MAX 16

using namespace std;

int used1[MAX], used2[2 * MAX - 1], used3[2 * MAX - 1];
int n, cnt;

void func(int x)
{
  if (x == n)
  {
    cnt++;
    return;
  }
  for (int y = 0; y < n; y++)
  {
    if (!used1[y] && !used2[x + y] && !used3[x - y + n - 1])
    {
      used1[y] = 1;
      used2[x + y] = 1;
      used3[x - y + n - 1] = 1;
      func(x + 1);
      used1[y] = 0;
      used2[x + y] = 0;
      used3[x - y + n - 1] = 0;
    }
  }
}

int main(void)
{
  cin >> n;
  func(0);
  cout << cnt;
}