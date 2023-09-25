#include <iostream>
#include <queue>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;

  queue<int> nums;
  queue<int> selected;

  for (int i = 0; i < n; i++)
  {
    nums.push(i + 1);
  }

  while (!nums.empty())
  {
    for (int i = 1; i < k; i++)
    {
      nums.push(nums.front());
      nums.pop();
    }
    selected.push(nums.front());
    nums.pop();
  }

  cout << "<";
  while (--n)
  {
    cout << selected.front() << ", ";
    selected.pop();
  }
  cout << selected.front();
  cout << ">";
}