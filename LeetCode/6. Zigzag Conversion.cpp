//https://leetcode.com/problems/zigzag-conversion/
//Medium
//Input: s = "PAYPALISHIRING", numRows = 3
//Output: "PAHNAPLSIIGYIR"

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        
        vector<int> gaps[numRows];
        int i = 0;
        
        while(i < numRow){
            if(i == 0 || i == (numRows-1)){
                gaps[i].push_back(2*(numRows-1));
            }
            else{
                gaps[i].push_back(2*(numRows-1-i));
                gaps[i].push_back(2*i);
            }
            
            i++;
        }
        
        string result;
        
        for(int j = 0; j<numRows; j++){
            int index = j;
            int k = 0;
            
            while(index < s.size()){
                result += s[index];
                index += (gaps[j][k]);
                
                if(!(j==0 || j==(numRows-1))){
                    k++;
                    k = k%2;
                }
            }
        }
        
        return result;
    }
};
