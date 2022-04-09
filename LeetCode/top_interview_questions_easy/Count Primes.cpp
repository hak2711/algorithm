//input: n = 10
//output: 4

class Solution {
public:
    int countPrimes(int n) {
        int nums[5000001];
        int count = 0;
        
        for(int i = 2; i<n; i++){
            nums[i] = i;
        }
        
        for(int i = 2; i<n; i++){
            if(!nums[i])
                continue;
            
            for(int j = 2*i; j<n; j+=i){
                nums[j] = 0;
            }
        }
        
        for(int i = 2; i<n; i++){
            if(nums[i]){
                count++;
            }
        }
        
        return count;
    }
};
