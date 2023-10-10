#include <iostream>
#include <vector>

using namespace std;

int net(int n, int k) {
  int cnt = 0;
  vector<int> isPrime(n+1, true);

  for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
      for (int j = i; j <= n; j += i) {
        if (isPrime[j]) {
          isPrime[j] = false;
          cnt++;
        }

        if (cnt == k) {
          return j;
        }
      }
    }
  }
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << net(n, k);
}