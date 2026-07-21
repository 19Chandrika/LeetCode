class Solution(object):
    def isPalindrome(self, s):
        new_str = ""
        for ch in s:
            if ch.isalnum():
                new_str += ch.lower()
        return new_str == new_str[::-1]
        