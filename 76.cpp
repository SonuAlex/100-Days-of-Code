// Q76
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// SOURCE CODE
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> umap;
        for(auto i: arr){
            umap[i]++;
        }
        set<int> s;

        for(auto j: umap){
            s.insert(j.second);
        }
        int n1 = umap.size();
        int n2 = s.size();
        if(n1 == n2){
            return true;
        } else {
            return false;
        }
        
    }
};