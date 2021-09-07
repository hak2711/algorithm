#include <iostream>

using namespace std;

int main(void)
{
  long long x, y, a, b;
  cin >> x >> y;

  if (x < y)
  {
    a = x;
    b = y;
  }
  else
  {
    a = y;
    b = x;
  }

  if (a == b)
  {
    cout << 0 << "\n";
  }
  else
  {
    cout << b - a - 1 << "\n";
  }

  for (long long i = a + 1; i < b; i++)
  {
    cout << i << " ";
  }
}

//모든 변수 long long으로 설정
//두 수의 대소 관계 비교
//두 수가 같은 경우 처리