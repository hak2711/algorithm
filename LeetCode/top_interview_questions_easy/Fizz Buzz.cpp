//input: n = 15
//output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        
        for(int i = 1; i<=n; i++){
            string s = "";
            
            if(i%3 == 0){
                s+="Fizz";
            }
            if(i%5 == 0){
                s+="Buzz";
            }
            
            if(s=="")
                s+=to_string(i);
            
            answer.push_back(s);
        }
        
        return answer;
    }
};
