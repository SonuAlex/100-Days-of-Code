// Q66
// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.

// SOURCE CODE
class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n = d.size();
        int r = d[n-1]+1;
        int i = n-1;
        while(d[i] == 9){
            d[i] = 0;
            i--;
            if(i<0){
                vector<int> temp;
                temp.push_back(1);
                for(int j=0; j<n; j++){
                    temp.push_back(d[j]);
                }
                d = temp;
                return d;
            }
        }
        d[i]++;
        return d;
    }
};