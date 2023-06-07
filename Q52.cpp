// Q52
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.

// SOURCE CODE
class Solution {
public:
    int maxArea(vector<int>& height) {
        int amount = 0, len = height.size();
        int i = 0, j = len-1;
        while(i<j){
            if(height[i] > height[j]){
                amount = max(amount, height[j]*(j-i));
                j--;
            } else {
                amount = max(amount, height[i]*(j-i));
                i++;
            }
        }

        return amount;
    }
};