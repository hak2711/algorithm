//input: s = "MCMXCIV"
//output: 1994

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> pairs = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int result = 0;
        result += pairs[s[0]];
        
        for(int i = 1; i<s.size(); i++){
            //consider cases like IV which means four.
            if(pairs[s[i-1]] < pairs[s[i]]){
                result -= pairs[s[i-1]];
                result += (pairs[s[i]]-pairs[s[i-1]]);
            }
            else{
                result += pairs[s[i]];
            }
        }
        
        return result;
    }
};
