# Q17
# You are given an array of unique integers salary where salary[i] is the salary of the ith employee.
# Return the average salary of employees excluding the minimum and maximum salary

# SOURCE CODE
class Solution:
    def average(self, salary: List[int]) -> float:
        s = salary
        s.sort(), s.pop(-1), s.pop(0)
        return sum(s)/len(s)