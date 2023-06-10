// Q55
// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 < numbers.length.
// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

// SOURCE CODE
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();
        int i = 0, j = n-1;

        while(i<n){
            if(j == i){
                return {-1, -1};
            }else if(nums[i]+nums[j] != t){
                if(nums[i]+nums[j] > t){
                    j--;
                } else if(nums[i]+nums[j] < t){
                    i++;
                }
            } else if(nums[i]+nums[j] == t){
                return {i+1,j+1};
            }
        }

        return {-1,-1};
    }
};