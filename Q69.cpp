// Q69
// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

// SOURCE CODE
class Solution{
public:
    // O(n) 
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        unordered_map<int, size_t> map;
        for (size_t i = 0; i < nums.size(); ++i){
            if (map.count(nums[i])){
                if (i - map[nums[i]] <= k)
                    return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};