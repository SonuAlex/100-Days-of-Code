// Q35
// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

// SOURCE CODE
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size(), count;
        vector<int> small;

        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                if(nums[i] > nums[j]){
                    count++;
                }
            }
            small.push_back(count);
            count = 0;
        }

        return small;
    }
};