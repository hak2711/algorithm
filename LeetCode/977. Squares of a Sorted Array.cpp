//Input: nums = [-4,-1,0,3,10]
//Output: [0,1,9,16,100]

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < 0)
                nums[i] *= -1;
        }
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i<nums.size(); i++){
            nums[i] *= nums[i];
        }
        
        return nums;
    }
};
