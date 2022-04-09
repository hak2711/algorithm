//input: n = 00000010100101000001111010011100
//output:    964176192 (00111001011110000010100101000000)

#include <string>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s = "";
        
        while(n > 0){
            s += to_string(n%2);
            n/=2;
        }
        
        while(s.size() < 32){
            s += "0";
        }
        
        return stol(s,0,2);
    }
};
