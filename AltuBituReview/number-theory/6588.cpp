#include <iostream>
#include <vector>
#include <math.h>
#define MAX 1000000

typedef long long ll;

using namespace std;

vector<bool> isPrime(MAX+1, true);

void net(){

    for(ll i = 2; i<=sqrt(MAX); i++){
      if(!isPrime[i]){
        continue;
      }
        for(ll j = i*i; j<=MAX; j+=i){
          isPrime[j] = false;
        }
    }
}

int findPairs(int target){
    int i = 0;

    for(int i = 3; i<=target/2; i+=2){
      if(isPrime[i] && isPrime[target-i]){
        return i;
      }
    }

    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, answer = 0;
    net();
  
    while(cin >> n){
        if(n == 0){
          break;
        }
      
        answer = findPairs(n);

        if(answer == -1){
            cout << "Goldbach's conjecture is wrong.";
        }else{
            cout << n << " = " << answer << " + " << n-answer << "\n";
        }
    }

}