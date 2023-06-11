// Q57
// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

// SOURCE CODE
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        vector<int> res;

        while(i<n){
            res.push_back(arr[i]);
            if(arr[i] == 0){
                res.push_back(0);
            }
            i++;
        }

        for(int i=0; i<n; i++){
            arr[i] = res[i];
        }
    }
};