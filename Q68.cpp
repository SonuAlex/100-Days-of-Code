// Q68
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// SOURCE CODE
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};