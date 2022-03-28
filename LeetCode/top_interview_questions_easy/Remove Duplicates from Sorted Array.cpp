//input : nums = [1,1,2]
//output : 2, nums = [1,2]

//replace the duplicated one into different number
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[index] != nums[i]){
                index++;
                nums[index] = nums[i];
            }
        }
        return index+1;
    }
};
