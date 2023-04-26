# Q10
# The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1.

# SOURCE CODE
class Solution(object):
    def fib(self, n):
        a, b, c = 0, 1, 0
        for i in range(n):
            c = a + b
            a, b = c, a
        return c