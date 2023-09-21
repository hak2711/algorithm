//input: x = 123
//output: 321

class Solution {
public:
    int reverse(int x) {
        if(x<10 && x>-10)
            return x;
        
        string original = to_string(x);
        string reversed = "";
        
        for(int i = original.size()-1; i>0; i--){
            reversed+=original[i];
        }
        
        long result = stol(reversed);
        
        if(result > INT_MAX)
            return 0;
        
        if(original[0] == '-'){
            result *= -1;
            if(result < INT_MIN)
                return 0;
        }
        else{
            result = result*10 + original[0] - '0';
            if(result > INT_MAX)
                return 0;
        }
        return result;
    }
};
