// Q37
// You are given a positive integer num consisting of exactly four digits. Split num into two new integers new1 and new2 by using the digits found in num. Leading zeros are allowed in new1 and new2, and all the digits found in num must be used.
// For example, given num = 2932, you have the following digits: two 2's, one 9 and one 3. Some of the possible pairs [new1, new2] are [22, 93], [23, 92], [223, 9] and [2, 329].
// Return the minimum possible sum of new1 and new2.

// SOURCE CODE
class Solution {
public:
    int minimumSum(int num) {
        int n, ind, len=4;
        vector<int> digits;
        vector<int> dig;

        for(int i=0; i<len; i++){
            n = num % 10;
            num = num / 10;

            digits.push_back(n);
        }

        sort(digits.begin(), digits.end());
        dig = digits;

        for(int i=0; i<4; i++){
            cout << dig[i] << ' ';
        }


        int result = dig[0]*10 + dig[1]*10 + dig[2] + dig[3];

        return result;
    }
};