#include <iostream>
#define MAX 9

using namespace std;

int arr[MAX];
int used[MAX];
int n, m;

void func(int x)
{
  if (x == m)
  {
    for (int i = 0; i < m; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\n";
    return;
  }
  for (int i = 1; i <= n; i++)
  {
    if (!used[i])
    {
      arr[x] = i;
      used[i] = 1;
      func(x + 1);
      used[i] = 0;
    }
  }
}

int main(void)
{
  cin >> n >> m;
  func(0);
}