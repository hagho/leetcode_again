class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        hashtable = [-1] * 255
        i = -1
        res = 0
        for j, char in enumerate(s):
            i = max(hashtable[ord(s[j])], i)
            hashtable[ord(s[j])] = j
            res = max(res, j - i)
        return res