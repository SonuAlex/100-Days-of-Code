# Q.5
# Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
# The order of the elements may be changed. Then return the number of elements in nums which are
# not equal to val.

# Consider the number of elements in nums which are not equal to val be k, to get accepted, you
# need to do the following things:

# Change the array nums such that the first k elements of nums contain the elements which are not
# equal to val. The remaining elements of nums are not important as well as the size of nums.

# Return k.

# SOURCE CODE
class Solution(object):
    def removeElement(self, nums, val):
        self.nums = nums
        self.val = val
        self.k = 0
        for i in range(len(self.nums)):
            if self.nums[i]==self.val:
                continue
            self.nums[self.k]=self.nums[i]
            self.k += 1
        return self.k