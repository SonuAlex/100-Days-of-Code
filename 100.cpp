// Q100
// Given a string S consisting of lowercase Latin Letters. 
// Return the first non-repeating character in S. 
// If there is no non-repeating character, return '$'.

// SOURCE CODE
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S){
       //Your code here
        vector<pair<char, int>> umap;
        for(int i=0; i<S.size(); i++){
            bool isTru = true;
            for(auto &pair : umap){
                if(pair.first == S[i]){
                    isTru = false;
                    pair.second = pair.second + 1;
                    break;
                }
            } if(isTru){
                umap.push_back(make_pair(S[i], 1));
            }
        }
        
        for(auto i:umap){
            if(i.second == 1)
                return i.first;
        }
        return '$';
    }

};