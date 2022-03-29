//input: nums1 = [1,2,2,1], nums2 = [2,2]
//output: [2,2]

//sort both lists and compare each element
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> results;
        int i = 0; int j = 0;
        
        //to reduce the number of excuted loops use multiple ifs rather than else if
        while((i<nums1.size()) && (j<nums2.size())){
            if(nums1[i] < nums2[j]){
                i++;
                if(i == nums1.size())
                    break;
            }
            if(nums1[i] > nums2[j]){
                j++;
                if(j == nums2.size())
                    break;
            }
            if(nums1[i] == nums2[j]){
                results.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return results;
    }
};
