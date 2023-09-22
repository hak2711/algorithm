#include <iostream>
#include <map>

using namespace std;

map<int, int> cnt;

void calculatePairs(int target)
{
  int total = 0;
  for (auto iter : cnt)
  {
    if (iter.first > (target + 1) / 2)
    {
      break;
    }
    cnt[iter.first]--;
    if (cnt[target - iter.first])
    {
      cout << iter.first << " " << target - iter.first << "\n";
      cnt[target - iter.first]--;
      total++;
    }
  }

  cout << total;
}

int main()
{
  int input, target;
  while (cin >> input)
  {
    cnt[input]++;
  }

  target = input;

  calculatePairs(target);
}
