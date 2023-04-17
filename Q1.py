#Q1. 
#There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has,
#and an integer extraCandies, denoting the number of extra candies that you have. Return a boolean array result of length n, where result[i] is true if,
#after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

#SOURCE CODE
class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        self.candies = candies
        self.extraCandies = extraCandies
        self.result = []
        maxCandies = max(self.candies)

        for i in self.candies:
            c = i + extraCandies
            if c >= maxCandies:
                self.result.append(True)
            else:
                self.result.append(False)
        return self.result