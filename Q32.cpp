// Q32
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// SOURCE CODE
class Solution {
public:
    bool isValid(string s) {
        // Initalizing Values
        bool isVal = true, isSta = true;
        vector<char> arr;
        char s1 = '(', s2 = '{', s3 = '[';
        int c = 0;

        // Mini Checking
        if(s.size() == 1){
            return false;
        } if(s[0] == ')' || s[0] == '}' || s[0] == ']'){
            return false;
        }

        // Main Code
        for(int i=0; i<s.size(); i++){
            // Part 1
            if(s[i] == s1){
                arr.push_back(s1);
                c++;
            } else if(s[i] == s2){
                arr.push_back(s2);
                c++;
            } else if(s[i] == s3){
                arr.push_back(s3);
                c++;
            }

            if(s[i] == ')'){
                if(arr.size() > 0 && arr[c-1] == s1){
                    arr.erase(arr.end()-1);
                    c--;
                } else {
                    isVal = false;
                    break;
                }
            } else if(s[i] == '}'){
                if(arr.size() > 0 && arr[c-1] == s2){
                    arr.erase(arr.end()-1);
                    c--;
                } else {
                    isVal = false;
                    break;
                }
            } else if(s[i] == ']'){
                if(arr.size() > 0 && arr[c-1] == s3){
                    arr.erase(arr.end()-1);
                    c--;
                } else {
                    isVal = false;
                    break;
                }
            }
        }

        if(arr.size() > 0){
            return false;
        }

        return isVal;
    }
};