# Q2.
# You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.

# You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].

#SOURCE CODE
class Solution(object):
    def convertTemperature(self, celsius):
        self.celsius = celsius
        return [self.celsius+273.15, self.celsius*9/5+32]