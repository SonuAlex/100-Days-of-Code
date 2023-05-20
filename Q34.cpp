// Q34
// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
// You are given an array of strings sentences, where each sentences[i] represents a single sentence.
// Return the maximum number of words that appear in a single sentence.

// SOURCE CODE
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int len = sentences.size(), count = 0, larg = 0;
        vector<int> sizes;

        for(int i=0; i<len; i++){
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            sizes.push_back(count+1);
            count = 0;
        }

        for(int i=0; i<sizes.size(); i++){
            if(sizes[i] > larg){
                larg = sizes[i];
            }
        }

        return larg;
    }
};