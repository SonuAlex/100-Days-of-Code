// Q53
// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

// SOURCE CODE
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> arr(n+1, 0);

        for(int i=0; i<n; i++){
            arr[nums[i]]++;
        }

        for(int i=1; i<n+1; i++){
            if(arr[i] == 0) ans.push_back(i);
        }

        return ans;
    }
};