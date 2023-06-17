// Q62
// Your friend is typing his name into a keyboard. Sometimes, when typing a character c, the key might get long pressed, and the character will be typed 1 or more times.
// You examine the typed characters of the keyboard. Return True if it is possible that it was your friends name, with some characters (possibly none) being long pressed.

// SOURCE CODE
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name[0] != typed[0]) return false;
        int n1 = name.size(), n2 = typed.size();
        int i = 0, j = 0;

        while(i<n1 || j<n2){
            if(name[i] == typed[j]) i++;
            else if(typed[j] != typed[j-1]) return false;
            j++;
        }
        
        return true;
    }
};