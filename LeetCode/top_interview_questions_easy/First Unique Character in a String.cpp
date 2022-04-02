//input: s = "leetcode"
//output: 0

#include <string>

class Solution {
public:
    int firstUniqChar(string s) {
        //array to discern duplicated characters
        bool isnotValid[26] = {false};
        
        for(int i = 0; i<s.size(); i++){
            if((isnotValid[s[i]-'a']==false) && (s.find(s[i],i+1)==std::string::npos))
                return i;
            else{
                //check as not valid
                isnotValid[s[i]-'a'] = true;
            }
        }
        return -1;
    }
};
