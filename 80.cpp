// Q80
// Anagram

// SOURCE CODE
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        unordered_map<char, int> umap, umap2;
        if(a.size() != b.size()){
            return false;
        }
        int n = a.size();
        for(int i=0; i<n; i++){
            umap[a[i]]++;
            umap2[b[i]]++;
        }
        if(umap == umap2){
            return true;
        } else {
            return false;
        }
    }

};