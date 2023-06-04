// Q49
// You are given an array arr of positive integers. You are also given the array queries where queries[i] = [lefti, righti].
// For each query i compute the XOR of elements from lefti to righti (that is, arr[lefti] XOR arr[lefti + 1] XOR ... XOR arr[righti] ).
// Return an array answer where answer[i] is the answer to the ith query.

// SOURCE CODE
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> result;
        int temp;

        for(int i=1; i<arr.size(); i++){
            arr[i] ^= arr[i-1];
        }

        for(auto &i: queries){
            if(i[0] == 0){
                temp = arr[i[1]];
            } else {
                temp = arr[i[1]] ^ arr[i[0]-1];
            }
            result.push_back(temp);
        }
        return result;
    }
};