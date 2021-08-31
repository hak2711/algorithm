#include <iostream>
#include <cmath>

using namespace std;

int func(int n, int r, int c){
  int x = pow(2,(n-1));
  if(n == 0){
    return 0;
  }
  if(r >= x && c >= x)
    return func(n-1,r-x,c-x)+x*x*3;
  if(r >= x)
    return func(n-1,r-x,c)+x*x*2;
  if(c >= x)
    return func(n-1,r,c-x)+x*x;
  return func(n-1,r,c);
}

int main(void){
  int n, r, c;
  cin >> n >> r >> c;
  cout << func(n,r,c);
}