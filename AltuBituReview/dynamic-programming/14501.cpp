#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> ci;

int calculate(vector<ci> &lists, int n){
    vector<int> dp(n+1,0);

    for(int i = n-1; i>=0; i--){
        if((i+lists[i].first) <= n){
          dp[i] = lists[i].second + *max_element(dp.begin()+i+lists[i].first,dp.end());
        }
    }

    return *max_element(dp.begin(),dp.end());
}



int main(){
    int n, result;
    cin >> n;
    vector<ci> lists(n,{0,0});

    for(int i = 0; i<n; i++){
        cin >> lists[i].first >> lists[i].second;
    }

    cout << calculate(lists,n);

}