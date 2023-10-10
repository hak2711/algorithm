#include <iostream>

using namespace std;

int greatestCommonDivision(int a, int b) {
  if (b == 0) {
    return a;
  }

  if (b == 1) {
    return b;
  }

  return greatestCommonDivision(b, a % b);
}

int main() {
  int a, b, gcd, lcm;

  cin >> a >> b;

  if (a < b) {
    swap(a, b);
  }

  gcd = greatestCommonDivision(a, b);
  lcm = a * b;

  if (gcd) {
    lcm /= gcd;
  }

  cout << gcd << "\n";
  cout << lcm << "\n";
}