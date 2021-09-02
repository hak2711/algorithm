#include <iostream>
#define MAX 21

using namespace std;

int arr[MAX];
int n, s, cnt;

void func(int x, int sum)
{
  if (x == n)
  {
    if (sum == s)
      cnt++;
    return;
  }
  func(x + 1, sum);
  func(x + 1, sum + arr[x]);
}

int main(void)
{
  cin >> n >> s;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  func(0, 0);

  if (s == 0)
    cnt--;

  cout << cnt;
}