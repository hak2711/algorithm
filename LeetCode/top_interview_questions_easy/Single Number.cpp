//input : nums = [2,2,1]
//output : 1

//since nums[i] is range from -3*10**4 to 3*10**4 it has to cover up negative values too.
#define MAX 60001
#define MARGIN 30000

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        bool check[MAX] = {false};
        
        for(int i = 0; i<nums.size(); i++){
            //the only one that has one element becomes to have true value on the check array.
            check[nums[i]+MARGIN] = !check[nums[i]+MARGIN];
        }
        
        for(int i = 0; i<nums.size(); i++){
            if(check[nums[i]+MARGIN])
                return nums[i];
        }
        
        return nums[nums.size()-1];
    }
};
