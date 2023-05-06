// Q20
// Given a valid (IPv4) IP address, return a defanged version of that IP address.
// A defanged IP address replaces every period "." with "[.]".

// SOURCE CODE
class Solution {
public:
    string defangIPaddr(string address) {
        string defanged;
        int len = address.length() - 1;
        for(int i = 0; i <= len; i++) {
            if (address[i] == '.'){
                defanged = defanged + "[.]";
            } else {
                defanged = defanged + address[i];
            }
        }
        return defanged;
    }
};