// Q60
// Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

// SOURCE CODE
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;
        sort(words.begin(), words.end());

        for(char c: words[0]){
            bool co = true;
            for(int i=1; i<words.size(); i++){
                if(words[i].find(c) == string::npos){
                    co = false;
                    break;
                } else {
                    words[i].erase(words[i].find(c), 1);
                }
            }
            if(co){
                res.push_back(string(1, c));
            }
        }

        return res;
    }
};