#include <iostream>
#include <vector>

using namespace std;

vector<pair<char, pair<char, char>>> v;

void preorder(char a)
{
  if (a == '.')
    return;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i].first == a)
    {
      cout << a;
      preorder(v[i].second.first);
      preorder(v[i].second.second);
      return;
    }
  }
}

void inorder(char a)
{
  if (a == '.')
    return;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i].first == a)
    {
      inorder(v[i].second.first);
      cout << a;
      inorder(v[i].second.second);
      return;
    }
  }
}

void postorder(char a)
{
  if (a == '.')
    return;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i].first == a)
    {
      postorder(v[i].second.first);
      postorder(v[i].second.second);
      cout << a;
      return;
    }
  }
}

int main(void)
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    char x, y, z;
    cin >> x >> y >> z;
    v.push_back(make_pair(x, make_pair(y, z)));
  }
  preorder(v[0].first);
  cout << "\n";
  inorder(v[0].first);
  cout << "\n";
  postorder(v[0].first);
}