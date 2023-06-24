// Q70
// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.

// SOURCE CODE
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        while(pow(2,i)<n){
            i++;
        }
        if(pow(2,i) == n){
            return true;
        }
        return false;
    }
};