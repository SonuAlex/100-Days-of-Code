# You are given two strings word1 and word2. Merge the strings by adding letters in alternating
# order, starting with word1. If a string is longer than the other, append the additional letters
# onto the end of the merged string.

# Return the merged string.

#SOURCE CODE
class Solution(object):
    def mergeAlternately(self, word1, word2):
        self.word1 = word1
        self.word2 = word2
        self.merged = []
        self.string = ''
        if len(self.word1) > len(self.word2):
            n = len(self.word1)
        else:
            n = len(self.word2)
        
        for i in range(n):
            if i <= len(self.word1)-1:
                self.merged.append(word1[i])
            if i+1 <= len(self.word2):
                self.merged.append(word2[i])

        for i in self.merged:
            self.string += i
        return self.string