#include <iostream>

using namespace std;
using ll = long long;

ll func(ll a, ll b, ll c)
{
  if (b == 1)
    return a % c;
  if (b % 2 == 1)
  {
    return func(a, b - 1, c) * a % c;
  }
  return func(a, b / 2, c) * func(a, b / 2, c) % c;
}

int main(void)
{
  int a, b, c;
  cin >> a >> b >> c;
  cout << func(a, b, c);
}