//input : [9,9,9]
//output : [1,0,0,0]

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1; //to add 1
        
        for(int i = digits.size()-1; i>=0; i--){
            if(carry){
                //do the sum
                int result = digits[i]+carry;
                carry = 0;
                
                digits[i] = (result%10); 
                
                //calculating carryout
                if(result >= 10){
                    //if it is the first element, we should insert new element.
                    if(i == 0)
                        digits.insert(digits.begin(), 1, carry+1);
                    else
                        carry += 1;
                }
                continue;
            }
            return digits;
        }
        
        return digits;
        
    }
};
