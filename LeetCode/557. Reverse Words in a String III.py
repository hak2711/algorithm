//Input: s = "Let's take LeetCode contest"
//Output: "s'teL ekat edoCteeL tsetnoc"

class Solution:
    def reverseWords(self, s: str) -> str:
        strings = s.split(" ")
        
        for i in range(len(strings)):
            for j in range(len(strings[i])//2):
                strlist = list(strings[i])
                strlist[j], strlist[-j-1] = strlist[-j-1], strlist[j]
                strings[i] = ''.join(strlist)
        return ' '.join(strings)
