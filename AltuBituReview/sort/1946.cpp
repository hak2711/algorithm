#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;

int calculateAcceptance(vector<pii> &applicants)
{
  int acceptance = 1; //at least one will be accepted
  sort(applicants.begin(), applicants.end());

  for (int i = 0; i < applicants.size(); i++)
  {

    if (applicants[i].second > applicants[i + 1].second)
    {
      acceptance++;
    }
  }

  return acceptance;
}

int main(void)
{
  int t, n, x, y;

  cin >> t;

  for (int i = 0; i < t; i++)
  {
    cin >> n;
    vector<pii> applicants;

    for (int j = 0; j < n; j++)
    {
      cin >> x >> y;
      applicants.push_back({x, y});
    }
    cout << calculateAcceptance(applicants);
  }
}