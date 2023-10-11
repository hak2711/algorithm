#include <iostream>
#include <string>

using namespace std;

int main() {
  string input;
  int time = 0, value = 0;

  cin >> input;

  for (char c : input) {
    value = (c - 'A') / 3 + 3;
    if (c == 'S' || c == 'V') {
      value--;
    }
    if (c > 'V') {
      value = 10;
    }
    time += value;
  }

  cout << time;
}