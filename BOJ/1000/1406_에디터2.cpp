#include <iostream>
#include <string>
#define MAX 1000001

using namespace std;

char dat[MAX];
int pre[MAX], nxt[MAX];
int unused = 1;

void insert(int addr, char ch)
{
  int cur = nxt[addr];
  dat[unused] = ch;
  nxt[unused] = cur;
  pre[unused] = addr;

  if (cur != -1)
    pre[cur] = unused;
  nxt[addr] = unused;
  unused++;
}

void erase(int addr)
{
  int cur = nxt[addr];

  if (cur != -1)
    pre[cur] = pre[addr];
  nxt[pre[addr]] = cur;
}

void traverse()
{
  int cur = nxt[0];
  while (cur != -1)
  {
    cout << dat[cur];
    cur = nxt[cur];
  }
  cout << "\n";
}

int main(void)
{
  string s;
  cin >> s;

  fill(pre, pre + MAX, -1);
  fill(nxt, nxt + MAX, -1);

  int cursor = 0;

  for (char c : s)
  {
    insert(cursor++, c);
  }

  int M;
  cin >> M;

  for (int i = 0; i < M; i++)
  {
    char x, y;
    cin >> x;

    if (x == 'L')
    {
      if (pre[cursor] != -1)
        cursor = pre[cursor];
    }
    else if (x == 'D')
    {
      if (nxt[cursor] != -1)
      {
        cursor = nxt[cursor];
      }
    }
    else if (x == 'B')
    {
      if (cursor != 0)
      {
        erase(cursor);
        cursor = pre[cursor];
      }
    }
    else
    {
      cin >> y;
      insert(cursor, y);
      cursor = nxt[cursor];
    }
  }
  traverse();
}