# Q11
# The Tribonacci sequence Tn is defined as follows: 
# T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
# Given n, return the value of Tn.

# SOURCE CODE
class Solution(object):
    def tribonacci(self, n):
        a, b, c, d = 1, 1, 0, 0
        if n == 0:
            return 0
        elif n == 1:
            return 1
        elif n == 2:
            return 1
        for i in range(n-2):
            d = a+b+c
            a, b, c = d, a, b
        return d