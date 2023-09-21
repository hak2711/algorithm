//Input: s1 = "ab", s2 = "eidbaooo"
//Output: true

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        
        int alpha1[26] = {0};
        int alpha2[26] = {0};
        bool startFlag = false;
        
        for(char c : s1){
            alpha1[c-'a']++;
        }
        
        int i = 0;
        int j = 0;
        
        while(j < s2.size()){
            alpha2[s2[j]-'a']++;
            
            if(j-i+1==s1.size()){
                if(checkAlphas(alpha1,alpha2))
                    return true;;
            }
            
            if(j-i+1 < s1.size())
                j++;
            else{
                alpha2[s2[i]-'a']--;
                i++;
                j++;
            }
                
        }
        
        return false;
    }
    
    bool checkAlphas(int a[26], int b[26]){
        for(int i = 0; i<26; i++){
            if(a[i] != b[i])
                return false;
        }
        return true;
    }
};
