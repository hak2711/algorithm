//input: nums = [-2,1,-3,4,-1,2,1,-5,4]
//output: 6

#define MAX 100001

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dp[MAX] = {0};
        dp[0] = nums[0];
        
        for(int i = 1; i<nums.size(); i++){
            dp[i] = max(dp[i-1]+nums[i], nums[i]);
        }
        
        return *max_element(dp,dp+nums.size());
    }
};
