// Q30
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// SOURCE CODE
class Solution {
public:
    int reverse(int x) {
        long reverse = 0;
        int num =x;
        while(x!=0){
            int digit = x%10;
            reverse = reverse*10 + digit;
            x=x/10;
        }
       if(reverse>INT_MAX || reverse<INT_MIN) return 0;
        return reverse;
    }
};