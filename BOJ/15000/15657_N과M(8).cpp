#include <iostream>
#include <algorithm>
#define MAX 10001

using namespace std;

int nums[MAX];
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
  for (int i = 0; i < n; i++)
  {
    int num = nums[i];
    if (x > 0 && arr[x - 1] > num)
    {
      continue;
    }
    if (used[num] <= m)
    {
      arr[x] = num;
      used[num] = 1;
      func(x + 1);
      used[num] = 0;
    }
  }
}

int main(void)
{
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  sort(nums, nums + n);

  func(0);
}