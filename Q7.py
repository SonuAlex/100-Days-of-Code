# You are given a string s, which contains stars *.

# In one operation, you can:

# Choose a star in s.
# Remove the closest non-star character to its left, as well as remove the star itself.
# Return the string after all stars have been removed.

# SOURCE CODE
class Solution(object):
    def removeStars(self, s):
        self.s = s
        self.result = []

        for c in self.s:
            if c == '*' and self.result:
                self.result.pop()
            else:
                self.result.append(c)

        return ''.join(self.result)