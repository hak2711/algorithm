#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n, x, mid;
  cin >> n;

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  priority_queue<int, vector<int>, greater<int>> upper;
  priority_queue<int> lower;

  cin >> mid;
  cout << mid << "\n";

  for (int i = 2; i <= n; i++) {
    cin >> x;
    if (x > mid && i % 2 == 1 && upper.size() > lower.size()) {
      upper.push(x);
      lower.push(mid);
      mid = upper.top();
      upper.pop();
    } else if (x > mid) {
      upper.push(x);
    } else if (x <= mid &&
               ((i % 2 == 1 && lower.size() > upper.size()) || (i % 2 == 0))) {
      lower.push(x);
      upper.push(mid);
      mid = lower.top();
      lower.pop();
    } else if (x <= mid) {
      lower.push(x);
    }
    cout << mid << "\n";
  }
}