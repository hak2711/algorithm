//input: x = 1, y = 4
//output: 2

class Solution {
public:
    int hammingDistance(int x, int y) {
        int result=0;
        
        while(x > 0 && y > 0){
            if(!(x%2) != !(y%2))
                result++;
            x/=2;
            y/=2;
        }
        
        while(x > 0){
            result += (x%2);
            x/=2;
        }
        
        while(y > 0){
            result += (y%2);
            y/=2;
        }
        
        return result;
    }
};
