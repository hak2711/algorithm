#include <iostream>
#define E_MAX 15
#define S_MAX 28
#define M_MAX 19

using namespace std;

int main(){
    int e,s,m;
    cin >> e >> s >> m;

    int i = 1;

    if(e == E_MAX){
      e = 0;
    }
    if(s == S_MAX){
      s = 0;
    }
    if(m == M_MAX){
      m = 0;
    }

    while(true){
        if(i%E_MAX == e && i%S_MAX == s && i%M_MAX == m){
            cout << i;
            break;
        }
        i++;
    }
}