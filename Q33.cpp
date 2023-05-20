// Q33
// Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.

// SOURCE CODE
class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> toStr;
        int step = 0;
        string str = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                str += s[i];
            }else if(str.size() > 0){
                toStr.push_back(str);
                str = "";
            }
        }
        if(str.size() > 0){
            toStr.push_back(str);
        }

        // k = 
        int len1 = toStr.size();
        int res = toStr[len1-1].size();

        for(int i=0; i<len1; i++){
            cout << toStr[i] << ", ";
        }

        return res;
    }
};