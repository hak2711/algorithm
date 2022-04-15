//Input: nums = [1,3,5,6], target = 5
//Output: 2

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() <= 1){
            if(nums[0] >= target)
                return 0;
            return 1;
        }
        
        int start = 0;
        int end = nums.size()-1;
        int index = (start+end+1)/2;
        
        while(index >= 1 && index < nums.size()){
            if(nums[index-1] < target && nums[index] >= target)
                return index;
            if(nums[index-1] >= target){
                end = index-1;
            }
            else if(nums[index] < target){
                start = index+1;
            }
            
            index = (start+end+1)/2;
        }
        
        return index;
    }
};
