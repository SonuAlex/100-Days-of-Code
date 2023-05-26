// Q40
// Given a string s, reverse only all the vowels in the string and return it.
// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

// SOURCE CODE
class Solution {
public:
    string reverseVowels(string s) {
        int len = s.size();
        vector<int> index;
        vector<char> vow;
        string res = "";
        if(len == 0 || len == 1){
            return s;
        }

        for(int i=0; i<len; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                index.push_back(i);
                vow.push_back(s[i]);
            }
        }

        if(index.size() == 0 || index.size() == 1){
            return s;
        }

        reverse(vow.begin(), vow.end());
        int r=0, ind = index[0];

        for(int i=0; i<len; i++){
            if(i == ind){
                res += vow[r];
                if(r != index.size()-1){
                    r++;
                    ind = index[r];
                }
            } else {
                res += s[i];
            }
        }

        return res;
    }
};