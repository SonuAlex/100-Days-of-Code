# Given an integer x, return true if x is a palindrome, and false otherwise.

# SOURCE CODE
class Solution(object):
    def isPalindrome(self, x):
        self.x = x
        self.result = False
        string = str(self.x)
        string2 = ''

        for i in string[::-1]:
            string2 += i
        
        if string == string2:
            self.result = True

        return self.result