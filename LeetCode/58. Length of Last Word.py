Input: s = "   fly me   to   the moon  "
Output: 4

class Solution(object):
    def lengthOfLastWord(self, s):
        strings = s.strip().split(" ");
        
        return len(strings[-1])
