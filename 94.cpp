// Q94
// Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

// SOURCE CODE
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> res;
        string str = "";
        for(int i=0; i<S.size(); i++){
            if(S[i] == '.'){
                res.push_back(str);
                str = "";
            } else {
                str += S[i];
            }
        }
        
        res.push_back(str);
        str = "";
        
        for(int i=res.size()-1; i>0; i--){
            str += res[i];
            str += ".";
        }
        
        str += res[0];
        
        return str;
    } 
};