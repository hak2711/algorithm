#include <deque>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, x, temp;
  deque<int> nums;
  vector<int> seq;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    seq.push_back(x);
  }

  for (int i = n; i > 0; i--)
  {
    if (seq[i - 1] == 1)
    {
      nums.push_front(n - i + 1);
    }
    else if (seq[i - 1] == 2)
    {
      temp = nums.front();
      nums.pop_front();
      nums.push_front(n - i + 1);
      nums.push_front(temp);
    }
    else
    {
      nums.push_back(n - i + 1);
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << nums.front() << " ";
    nums.pop_front();
  }
}