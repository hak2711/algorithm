#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long solution(int n, vector<int> times)
{
  long long answer = LLONG_MAX;

  long long left = 1;
  long long right = (long long)(*max_element(times.begin(), times.end())) * (long long)n;

  while (left <= right)
  {
    long long mid = (left + right) / 2;
    long long temp = 0;
    for (int i = 0; i < times.size(); i++)
    {
      temp += (mid / times[i]);
    }

    if (temp >= n)
    {
      answer = min(answer, mid);
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }
  return answer;
}