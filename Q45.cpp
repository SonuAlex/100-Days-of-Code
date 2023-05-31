// Q45
// Given a positive integer num, return true if num is a perfect square or false otherwise.
// A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.
// You must not use any built-in library function, such as sqrt.

// SOURCE CODE
class Solution {
public:
    bool isPerfectSquare(int num) {
        int sq = sqrt(num);
        float sq1 = sqrt(num);

        if(sq == sq1){
            return true;
        } else {
            return false;
        }
    }
};