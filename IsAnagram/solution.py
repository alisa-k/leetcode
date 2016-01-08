class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
            
        alpha = [0] * 26
        
        for ch in s:
            alpha[ord(ch) - ord('a')] += 1
        
        for ch in t:
            alpha[ord(ch) - ord('a')] -= 1
            
        if not [value for value in alpha if value != 0]:
            return True
        return False