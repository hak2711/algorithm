//input: strs = ["flower","flow","flight"]
//output: "fl"

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = "";
        
        for(int i = 0; i<strs[0].size(); i++){
            for(int j = 1; j<strs.size(); j++){
                if(strs[j].size() <= i)
                    return common;
                if(strs[0][i] != strs[j][i])
                    return common;
            }
            common+=strs[0][i];
        }
        
        return common;
    }
};
