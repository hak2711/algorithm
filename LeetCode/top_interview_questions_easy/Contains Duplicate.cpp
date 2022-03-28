//input : nums = [1,2,3,1]
//output : true

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] == nums[i])
                return true;
        }
        
        return false;
    }
};
