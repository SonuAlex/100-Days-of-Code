# Q9
# A program was supposed to print an array of integers. The program forgot to print whitespaces and the array is printed as a string of digits s and all we know is that all 
# integers in the array were in the range [1, k] and there are no leading zeros in the array.

# Given the string s and the integer k, return the number of the possible arrays that can be printed as s using the mentioned program. Since the answer may be very large, 
# return it modulo 109 + 7.

# SOURCE CODE
class Solution(object):
    def numberOfArrays(self, s, k):
        N, K, M = len(s), len(str(k)) + 1, 10**9+7
        def valid(s):
            return s[0] != "0" and int(s) <= k
        dp = [0] * K
        for i in range(N-1, -1, -1):
            dp[i%K] = i > N-K and valid(s[i:])
            dp[i%K] = (dp[i%K] + sum(dp[j%K] for j in range(i+1, min(i+K+1, N)) if valid(s[i:j]))) % M
        return dp[0]