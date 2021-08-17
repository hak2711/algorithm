#include <iostream>

using namespace std;

int rooms[12];

int main(void)
{
  int K, N;
  cin >> N >> K;

  for (int i = 0; i < N; i++)
  {
    int S, Y;
    cin >> S >> Y;
    rooms[6 * S + Y - 1]++;
  }

  int answer = 0;

  for (int room : rooms)
  {
    answer += ((room + K - 1) / K);
  }

  cout << answer;
}