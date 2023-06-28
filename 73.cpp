// Q73
// Given an integer n, return true if it is a power of three. Otherwise, return false.
// An integer n is a power of three, if there exists an integer x such that n == 3x.

// SOURCE CODE
class Solution {
public:
    bool isPowerOfThree(int n) {
        int i = 0;
        while(pow(3,i) < n){
            i++;
        }
        if(pow(3,i) == n) return true;
        return false;
    }
};
