//input: nums = [-1,0,1,2,-1,-4]
//output: [[-1,-1,2],[-1,0,1]]

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        
        if(nums.size() < 3)
            return results;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i<(nums.size()-1); i++){
            int low = i+1;
            int high = nums.size()-1;
            int target = (-1)*nums[i];
            
            if((i!=0) && (nums[i] == nums[i-1])) continue;
            
            while(low<high){
                if((nums[low]+nums[high]) == target){
                    vector<int> pair = {nums[low],nums[i],nums[high]};
                    results.push_back(pair);

                    while(low<high && nums[low]==nums[low+1]) low++;
                    while(low<high && nums[high]==nums[high-1]) high--;
                
                    low++;
                    high--;
                }
                else if((nums[low]+nums[high]) < target){
                    low++;
                }else{
                    high--;
                }
            }
        }
        
        return results;
    }
};
