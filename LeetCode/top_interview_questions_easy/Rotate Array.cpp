//input : nums = [1,2,3,4,5,6,7], k = 3
//output : [5,6,7,1,2,3,4]

#include <iterator>
#include <algorithm>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int index = (nums.size()-(k%nums.size()));
        nums.insert(nums.end(), nums.begin(), nums.begin()+index);
        nums.erase(nums.begin(), nums.begin()+index);
    }
};
