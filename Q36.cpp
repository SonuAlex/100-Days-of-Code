// Q36
// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

// SOURCE CODE
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, prod=1, len= to_string(n).size(), num;

        for(int i=0; i<len; i++){
            num = n%10;
            n = n/10;

            sum += num;
            prod *= num;
        }
        return (prod-sum);
    }
};