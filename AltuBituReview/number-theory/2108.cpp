#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <algorithm>
#include <math.h>

using namespace std;

typedef pair<int,int> ci;

bool cmp(ci a, ci b){
  if(a.second == b.second){
    return a.first < b.first;
  }
  return a.second > b.second;
}

int calculateAverage(int sum, int size){
    return round((float)sum/(float)size());
}

int calculateMedian(vector<int> &v){
    sort(v.begin(),v.end());
    return v[(v.size()-1)/2];
}

int calculateMode(map<int,int> &cnt){
    if(cnt.size() == 1){
      return cnt.begin()->first;
    }

    vector<ci> pairs(cnt.begin(),cnt.end());

    sort(pairs.begin(),pairs.end(),cmp);

    if(pairs[0].second == pairs[1].second){
      return pairs[1].first;
    }
  
    return pairs[0].first;

}

int calculateRange(map<int,int> &cnt){
    return (--cnt.end())->first - cnt.begin()->first;
}

int main(){
    int n, sum = 0;
    cin >> n;

    vector<int> nums(n);
    map<int,int> cnt;

    for(int i = 0; i<n; i++){
        cin >> nums[i];
        cnt[nums[i]]++;
        sum += nums[i];
    }

    cout << calculateAverage(sum, n) << "\n";
    cout << calculateMedian(nums) << "\n";
    cout << calculateMode(cnt) << "\n";
    cout << calculateRange(cnt) << "\n";
}