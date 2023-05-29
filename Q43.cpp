// Q43
// You are given an array nums consisting of positive integers.
// You have to take each integer in the array, reverse its digits, and add it to the end of the array. You should apply this operation to the original integers in nums.
// Return the number of distinct integers in the final array.

// SOURCE CODE
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int i, n;
        n = nums.size();
        string temp = "";
        for(i=0 ; i<n ; i++)
        {
            temp = to_string(nums[i]);
            reverse(temp.begin(), temp.end());
            nums.push_back(stoi(temp));
        }
        unordered_set<int> s(nums.begin(), nums.end());
        return s.size();
    }
};