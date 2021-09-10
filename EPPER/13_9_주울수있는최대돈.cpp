#include <iostream>
#include <vector>
using namespace std;

// 돈의개수 n과 크기가 n인 수열 M이 주어졌을 때
// 주울 수 있는 최대 돈을 구하는 함수
vector<int> money;

int solution(int n, vector<int> M)
{
  money.push_back(M[0]);
  money.push_back(M[0] + M[1]);
  money.push_back(max(max(M[0] + M[1], M[1] + M[2]), M[0] + M[2]));

  for (int i = 3; i < M.size(); i++)
  {
    money.push_back(max(max(money[i - 1], money[i - 2] + M[i]), money[i - 3] + M[i - 1] + M[i]));
  }
  return money[n - 1];
}

int main()
{
  int n;
  cin >> n;

  vector<int> M(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> M[i];
  }

  int ans = solution(n, M);
  cout << ans << endl;
  return 0;
}