// Q24
// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.

// SOURCE CODE
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0, l = nums.size();
        for(int i=0; i<l; i++){
            for(int j=i+1; j<l; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};