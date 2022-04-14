//Input: s = "pwwkew"
//Output: 3

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> chars(128,-1);
        
        int left = 0;
        int right = 0;
        
        int res = 0;
        
        while(right < s.length()){
            char r = s[right];
            
            int index = chars[r];
            //if index is between substring's index, the duplicated one has to  be excluded.
            if(index >= left and index < right){
                left = index + 1;
            }
            res = max(res, right - left + 1);
            
            chars[r] = right;
            right++;
        }
        return res;
    }
};
