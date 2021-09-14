#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    vector<int> aNum;
    vector<int> bNum;

    int a, b;
    cin >> a >> b;

    for (int j = 0; j < a; j++)
    {
      int x;
      cin >> x;
      aNum.push_back(x);
    }

    for (int j = 0; j < b; j++)
    {
      int x;
      cin >> x;
      bNum.push_back(x);
    }

    sort(aNum.begin(), aNum.end());
    sort(bNum.begin(), bNum.end());

    int index = 0;
    int answer = 0;

    for (int j = 0; j < a; j++)
    {
      for (int k = index; k < b; k++)
      {
        if (aNum[j] > bNum[k])
        {
          if (k == b - 1)
          {
            index = k + 1;
          }
          continue;
        }
        else
        {
          index = k;
          break;
        }
      }
      answer += index;
    }
    cout << answer << "\n";
  }
}