#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;
vector<int> b;

int main(void)
{
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> b(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  sort(a.begin(), a.end());
  vector<int> temp(b);

  int answer = 0;
  for (int i = 0; i < a.size(); i++)
  {
    int index = max_element(temp.begin(), temp.end()) - temp.begin();
    answer += (a[i] * temp[index]);
    temp.erase(temp.begin() + index);
  }

  cout << answer;
}