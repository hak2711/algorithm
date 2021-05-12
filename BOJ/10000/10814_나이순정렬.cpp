#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef struct member
{
    int age;
    string name;
    int index;
} mem;

vector<mem> v;

bool compare(mem a, mem b)
{
    if (a.age == b.age)
        return a.index < b.index;
    return a.age < b.age;
}

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        string y;
        cin >> x >> y;
        mem m1;
        m1.age = x;
        m1.name = y;
        m1.index = i;
        v.push_back(m1);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].age << " " << v[i].name << "\n";
    }
}

/*
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<pair<int,string>> v;

bool compare(pair<int,string> a, pair<int,string> b){
  return a.first < b.first;
}

int main(void){
  int n;
  cin >> n;

  for(int i=0; i<n; i++){
    int x;
    string y;
    cin >> x >> y;
    v.push_back(make_pair(x,y));
  }

  stable_sort(v.begin(),v.end(),compare);

  for(int i=0; i<n; i++){
    cout << v[i].first << " " << v[i].second << "\n";
  }
}
*/