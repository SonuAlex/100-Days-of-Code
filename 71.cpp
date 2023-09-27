// Q71
// Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

// SOURCE CODE
class Solution {
public:
    int hammingWeight(int n) {
        int c = 0;
        int i = 0;
        while(n){
            if(n & 1)
                c += 1;
            n>>=1;
            i++;
            if(i == 32) break;
        }   
        return c;
    }
};
