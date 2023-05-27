// Q41
// Given an input string s, reverse the order of the words.
// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
// Return a string of the words in reverse order concatenated by a single space.

// SOURCE CODE
class Solution {
public:
    string reverseWords(string s) {
        int len = s.size();
        vector<string> str;
        string cache = "";

        for(int i=0; i<len; i++){
            if(s[i] == ' '){
                if(cache.size() != 0){
                    str.push_back(cache);
                    cache = "";
                }
            } else if(i == len-1){
                if(s[i] != ' '){
                    cache += s[i];
                }
                str.push_back(cache);
            } else {
                cache += s[i];
            }
        }
        reverse(str.begin(), str.end());

        cache = "";
        for(int i=0; i<str.size(); i++){
            if(i != str.size()-1){
                cache += str[i];
                cache += " ";
            } else {
                cache += str[i];
            }
        }
        return cache;
    }
};