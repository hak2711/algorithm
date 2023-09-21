//input: haystack = "hello", needle = "ll"
//output: 2

class Solution {
public:
    int strStr(string haystack, string needle) {
        auto iter = haystack.find(needle);
        if(haystack.find(needle) != std::string::npos)
            return iter;
        return -1;
    }
};
