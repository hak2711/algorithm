//input: s = "   -42"
//output: -42

class Solution {
public:
    int myAtoi(string s) {
        bool isNegative = false;
        long value = 0;
        int start = 0;
        
        s.erase(0, s.find_first_not_of(' '));
        
        if((s[0] == '-') || (s[0] == '+')){
            if(s[0] == '-'){
                isNegative = true;
            }
            start++;
        }
        
        for(int i = start; i<s.size(); i++){
            
            if(!isdigit(s[i])){
                return 0;
            }
            else{
                try{
                    value = stoi(s.substr(i));
                }catch(std::out_of_range& e){
                    if(isNegative)
                        return INT_MIN;
                    return INT_MAX;
                }
                break;
            }
        }
        
        if(isNegative)
            value *= (-1);
        
        return value;
    }
};
