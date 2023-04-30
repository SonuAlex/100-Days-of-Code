# Q14
# You are climbing a staircase. It takes n steps to reach the top.

# Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

# SOURCE CODE
class Solution(object):
    def climbStairs(self, n):
        a, b, c = 1, 2, 0
        if n == 1:
            return n
        for i in range(3,n+1):
            c = a
            a = b
            b = c + b
        return b