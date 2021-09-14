#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
  int n;
  cin >> n;

  vector<int> nums;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    nums.push_back(x);
  }

  sort(nums.begin(), nums.end(), greater<int>());

  for (int num : nums)
  {
    cout << num << "\n";
  }
}