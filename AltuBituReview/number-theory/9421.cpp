#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define MAX 1e6 + 1

using namespace std;

vector<int> getPrimeNum(int n) {
  vector<bool> isPrime(MAX, true);
  vector<int> primeNum;

  for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
      primeNum.push_back(i);
    }
  }

  return primeNum;
}

bool isValid(int n) {
  string s = to_string(n);
  vector<int> results;
  int sum = 0, i = 0;

  while (true) {
    sum = 0;

    for (char c : s) {
      sum += (c - '0') * (c - '0');
    }
    i++;

    if (sum == 1) {
      return true;
    }

    if (find(results.begin(), results.end(), sum) != results.end()) {
      return false;
    }

    results.push_back(sum);
    s = to_string(sum);
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> primeNum = getPrimeNum(n);

  for (int x : primeNum) {
    if (isValid(x)) {
      cout << x << "\n";
    }
  }
}