#include <iostream>
#include <list>
#define MAX 5001

using namespace std;

int main(void)
{
  list<int> p;
  int N, K;
  cin >> N >> K;

  for (int i = 1; i <= N; i++)
  {
    p.push_back(i);
  }

  auto cursor = --p.begin();

  cout << "<";

  while (!p.empty())
  {
    for (int i = 0; i < K; i++)
    {
      if (cursor == --p.end())
        cursor = --p.begin();
      cursor++;
    }
    cout << *cursor;

    if (p.size() == 1)
    {
      cout << ">";
    }
    else
    {
      cout << ", ";
    }
    p.erase(cursor--);
  }
}