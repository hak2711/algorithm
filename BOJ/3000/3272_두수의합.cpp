#include <iostream>

using namespace std;

int nums[1000001];

int main(void)
{
  int n, x;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int s;
    cin >> s;
    nums[s]++;
  }

  cin >> x;

  int answer = 0;

  for (int i = 0; i <= (x / 2); i++)
  {
    if (nums[i] && nums[x - i] && (i != (x - i)))
    {
      answer++;
      nums[i]--;
      nums[x - i]--;
    }
  }

  cout << answer;
}