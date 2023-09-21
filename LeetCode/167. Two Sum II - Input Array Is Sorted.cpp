//Input: numbers = [2,7,11,15], target = 9
//Output: [1,2]

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        
        for(int i = 0; i<numbers.size(); i++){
            if((i > 0) && (numbers[i-1] == numbers[i]))
                continue;
            auto k = find(numbers.begin()+i+1, numbers.end(), target-numbers[i]); 
            if(k !=numbers.end()){
                result.push_back(i+1);
                result.push_back(k-numbers.begin()+1);
                break;
            }         
        }
        
        return result;
    }
};
