//input: nums = [0,1,0,3,12]
//output: [1,3,12,0,0]

//my answer
class Solution {
public:
    
    void moveZeroes(vector<int>& nums) {
        
        for(int i = nums.size()-1; i>=0; i--){
            if(nums[i]==0){
                //erase immediately and move it to the back
                nums.erase(nums.begin()+i);
                nums.push_back(0);
            }
        }
    }
};


//better answer
class Solution {
public:
    
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=0){
                //move nonzero element forward
                nums[index++] = nums[i];
            }
        }
        
        //make the remain elements to zero
        for(int i = index; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
