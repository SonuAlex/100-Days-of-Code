// Q28
// An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), the string representation of the integer n in base b is palindromic.
// Given an integer n, return true if n is strictly palindromic and false otherwise.
// A string is palindromic if it reads the same forward and backward.

// SOURCE CODE
class Solution {
public:
    string base(int b, int n){
        int len = to_string(n).size(), rem;
        string ret = "";
        while(n){
            rem = n%b;
            n /= b;
            ret += to_string(rem);
        }
        reverse(ret.begin(), ret.end());
        cout << ret << endl;
        return ret;
    }
    bool isStrictlyPalindromic(int n) {
        string temp, og;
        for(int i=2; i<n-1; i++){
            temp = base(i,n);
            og = temp, reverse(temp.begin(), temp.end());
            if(temp != og){
                return false;
            }
        }
        return true;
    } 
}