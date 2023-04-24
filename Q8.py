# Q8
# Given a string s. In one step you can insert any character at any index of the string.

# Return the minimum number of steps to make s palindrome.

# SOURCE CODE
class Solution(object):
    def minInsertions(self, s):
        reverse = s[::-1]
        n = len(s)
        array = [[0 for j in range(n+1)] for i in range(n+1)]
        for i in range(1, n+1):
            for j in range(1, n+1):
                if s[i-1] == reverse[j-1]:
                    array[i][j] = array[i-1][j-1] + 1
                else:
                    array[i][j] = max(array[i-1][j], array[i][j-1])

        return n - array[n][n]