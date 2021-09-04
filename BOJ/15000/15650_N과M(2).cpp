#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> nums;
vector<int> temp;
int n, m;

int main(void)
{
  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    nums.push_back(i);

    if (i <= m)
    {
      temp.push_back(1);
    }
    else
    {
      temp.push_back(0);
    }
  }

  do
  {
    for (int i = 0; i < nums.size(); ++i)
    {
      if (temp[i] == 1)
      {
        cout << nums[i] << " ";
      }
    }
    cout << "\n";
  } while (prev_permutation(temp.begin(), temp.end()));
}