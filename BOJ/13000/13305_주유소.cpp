#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int n;
  cin >> n;

  vector<int> nodes(n);
  vector<int> edges(n - 1);

  for (int i = 0; i < n - 1; i++)
  {
    cin >> edges[i];
  }

  for (int j = 0; j < n; j++)
  {
    cin >> nodes[j];
  }

  long long sum = 0;
  long long min = nodes[0];
  sum += (min * edges[0]);

  for (int i = 1; i < n; i++)
  {
    min = nodes[i] > min ? min : nodes[i];
    sum += (min * edges[i]);
  }

  cout << sum;
}