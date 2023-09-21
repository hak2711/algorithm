//Input: nums = [0,1,2,2,3,0,4,2], val = 2
//Output: 5, nums = [0,1,4,0,3,_,_,_]

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == val){
                nums[i] = INT_MAX;
                k--;
            }
        }
        
        sort(nums.begin(), nums.end());
        
        return k;
    }
};
