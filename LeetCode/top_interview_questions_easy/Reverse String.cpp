//input: s = ["h","e","l","l","o"]
//output: ["o","l","l","e","h"]

class Solution {
public:
    void reverseString(vector<char>& s) {
        string str(s.begin(), s.end());
        int len = s.size();
        
        for(int i = 0; i<len; i++){
            s[len-1-i] = str[i];
        }
    }
};
