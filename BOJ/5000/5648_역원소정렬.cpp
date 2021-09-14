#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<long long int> nums;

int main(void)
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    s = s.substr(0, s.find_last_not_of('0') + 1);
    reverse(s.begin(), s.end());
    nums.push_back(stoll(s));
  }

  sort(nums.begin(), nums.end());

  for (long long int num : nums)
  {
    cout << num << "\n";
  }
}