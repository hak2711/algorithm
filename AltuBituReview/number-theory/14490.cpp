#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int gcd(int a, int b){
    int n1 = a, n2 = b;
    if(a>b){
        swap(n1,n2);
    }

    int answer = 1;

    for(int i = 2; i<=n1; i++){
        if(n1%i == 0 && n2%i == 0){
            answer = i;
        }
    }

    return answer;
}

int main(){
    string s;
    cin >> s;

    int idx, a, b, num;
    idx = s.find(':');
    a = stoi(s.substr(0,idx));
    b = stoi(s.substr(idx+1,s.size()-idx));

    num = gcd(a,b);

    cout << a/num << ":" << b/num;
}