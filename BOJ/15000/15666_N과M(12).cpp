#include <iostream>
#include <algorithm>
#define MAX 10001

using namespace std;

int inputs[MAX];
int nums[MAX];
int arr[MAX];
int used[MAX];
int n, m, index;

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
  for (int i = 0; i < index; i++)
  {
    int num = inputs[i];
    if (x > 0 && arr[x - 1] > num)
    {
      continue;
    }

    if (used[num] <= m)
    {
      arr[x] = num;
      used[num]++;
      func(x + 1);
      used[num]--;
    }
  }
}

int main(void)
{
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    if (!nums[x])
    {
      inputs[index++] = x;
    }
    nums[x]++;
  }

  sort(inputs, inputs + index);

  func(0);
}