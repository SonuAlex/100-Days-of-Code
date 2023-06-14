// Q59
// Given an integer array nums and an integer k, modify the array in the following way:
//   -  choose an index i and replace nums[i] with -nums[i].
// You should apply this process exactly k times. You may choose the same index i multiple times.
// Return the largest possible sum of the array after modifying it in this way.

// SOURCE CODE
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int s = 0;

        for(int i=0; i<k; i++){
            nums[0] = -nums[0];
            sort(nums.begin(), nums.end());
        }

        for(int i=0; i<n; i++){
            s += nums[i];
        }

        return s;
    }
};