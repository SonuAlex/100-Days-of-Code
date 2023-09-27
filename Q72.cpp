// Q72
// Given an integer n, return true if it is a power of four. Otherwise, return false.
// An integer n is a power of four, if there exists an integer x such that n == 4x.

// SOURCE CODE
class Solution {
public:
    bool isPowerOfFour(int n) {
        int i = 0;
        while(pow(4,i) < n){
            i++;
        }
        if(pow(4,i) == n) return true;
        return false;
    }
};