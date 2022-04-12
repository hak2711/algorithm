//input: strs = ["eat","tea","tan","ate","nat","bat"]
//output: [["bat"],["nat","tan"],["ate","eat","tea"]]


//using unordered map
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> results;
        
        for(string s : strs){
            string cp = s;
            sort(cp.begin(), cp.end());
            
            //if you append string that has same sorted value in one vector, you don't have to find it later
            results[cp].push_back(s);
        }
        
        vector<vector<string>> outputs;
        
        for(auto result: results){
            outputs.push_back(result.second);
        }
        
        return outputs;
    }
};


//sorted through alphabet count
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> results;
        
        for(string s : strs){
            results[strSort(s)].push_back(s);
        }
        
        vector<vector<string>> outputs;
        
        for(auto result: results){
            outputs.push_back(result.second);
        }
        
        return outputs;
    }
    
    string strSort(string s){
        int alphabets[26] = {0};
        
        for(char c : s){
            //count the alphabets
            alphabets[c-'a']++;
        }
        
        string t = "";
        
        for(int i = 0; i<26; i++){
            //add the chars to the new string as much as the alphabet count
            t += string(alphabets[i],i+'a');
        }
        
        return t;
    }
};



//my
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> results;
        vector<string> inputs(strs);
        bool checked[10001] = {false};
        
        for(int i = 0; i<inputs.size(); i++){
            //sort each elements
            sort(inputs[i].begin(), inputs[i].end());
        }
        
        for(int i = 0; i<strs.size(); i++){
            //if it is already appended, skip it
            if(checked[i])
                continue;
            
            vector<string> r;
            r.push_back(strs[i]);
            checked[i] = true;
            
            //find the one
            for(int j = i+1; j<strs.size(); j++){
                if(inputs[i] == inputs[j]){
                    r.push_back(strs[j]);
                    checked[j] = true;
                }
            }
            
            results.push_back(r);
        }
        
        return results;
    }
};
