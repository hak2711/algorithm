//input: s = "anagram", t = "nagaram"
//output: true

#define MAX 26

class Solution {
public:
    bool isAnagram(string s, string t) {
        //to count the number of each alphabets
        //it is not sufficient if you just check the alphabet is in the string or not. you have to count the number of the alphabets.
        int alphabets[MAX] = { 0 };
        
        if(s.size() != t.size())
            return false;
        
        for(int i = 0; i<s.size(); i++){
            alphabets[s[i]-'a']++;
            alphabets[t[i]-'a']--;
        }
        
        //have to check all the elements in alphabet array
        for(int i = 0; i<MAX; i++){
            if(alphabets[i])
                return false;
        }
        return true;
    }
};
