//input: nums1 = [0], m = 0, nums2 = [1], n = 1
//output: [1,2,2,3,5,6]

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> results;
        
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                results.push_back(nums1[i]);
                i++;
            }else{
                results.push_back(nums2[j]);
                j++;
            }
        }
        
        //push all the remained elements
        while(i<m)
            results.push_back(nums1[i++]);
        
        while(j<n)
            results.push_back(nums2[j++]);
        
        nums1.swap(results);
    }
};
