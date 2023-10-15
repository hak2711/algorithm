#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 9

using namespace std;

int main(){
    vector<int> nums(MAX);
    int sum = 0, remain;

    for(int i = 0; i<MAX; i++){
        cin >> nums[i];
        sum += nums[i];
    }

    remain = sum-100;

    for(int i = 0; i<MAX; i++){
        auto idx = find(nums.begin(),nums.end(),remain-nums[i]);
        if((idx!=nums.end()) && (*idx != nums[i])){
            nums[i] = 0;
            nums[idx-nums.begin()] = 0;
            break;
        }
    }

    sort(nums.begin(),nums.end());

    for(int i = 2; i<MAX; i++){
        cout << nums[i] << "\n";
    }
}