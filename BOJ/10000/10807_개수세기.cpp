#include <iostream>

using namespace std;

int num[201];

int main(void)
{
  int N, v;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    num[x + 100]++;
  }

  cin >> v;
  cout << num[v + 100];
}