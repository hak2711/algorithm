#include <iostream>

using namespace std;

int func2(int arr[], int N){
  int num[101] = {0,};

  for(int i = 0; i<N; i++){
    if(num[100-arr[i]])
      return 1;
    num[arr[i]]++;
  }
  return 0;
}


int main(void){
  int a1[] = {1,52,48};
  int a2[] = {50,42};
  int a3[] = {4,13,63,87};

  cout << func2(a1,3) <<"\n";
  cout << func2(a2,2) <<"\n";
  cout << func2(a3,4) <<"\n";
}