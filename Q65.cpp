// Q65
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// SOURCE CODE
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int n1 = needle.size();
        int j=0;

        for(int i=0; i<=n-n1; i++){
            int j=0;
            for(; j<n1; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == n1){
                return i;
            }
        }
        return -1;
    }
};