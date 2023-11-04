#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
  int n,k;
  cin >> n >> k;

  stack<int> s;
  int num = 1;

  //필요한 만큼 2의 거듭제곱을 미리 계산
  while(num<=n){
    s.push(num);
    num*=2;
  }

  int target = n;
  vector<int> splited; //n을 2의 거듭제곱으로 분리한 결과를 저장

  while(!s.empty() && splited.size() < k){
    //남은 값보다 작은 2의 거듭제곱인 경우
    //2의 거듭제곱값을 저장하고
    //남은 값을 그만큼 뺀다
    if(s.top() <= target){
      splited.push_back(s.top());
      target -= s.top();
      s.pop();
    }else{
      s.pop();
    }
  }

  if(splited.size() == k && target != 0){
    splited.push_back(target);
  }

  if(splited.size() <= k){
    cout << 0;
  }
  else{
    cout << splited[splited.size()-2] - splited[splited.size()-1];
  }
}