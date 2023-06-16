// Q61
// Every valid email consists of a local name and a domain name, separated by the '@' sign. Besides lowercase letters, the email may contain one or more '.' or '+'.
// For example, in "alice@leetcode.com", "alice" is the local name, and "leetcode.com" is the domain name.
// If you add periods '.' between some characters in the local name part of an email address, mail sent there will be forwarded to the same address without dots in the local name. Note that this rule does not apply to domain names.
// For example, "alice.z@leetcode.com" and "alicez@leetcode.com" forward to the same email address.
// If you add a plus '+' in the local name, everything after the first plus sign will be ignored. This allows certain emails to be filtered. Note that this rule does not apply to domain names.
// For example, "m.y+name@email.com" will be forwarded to "my@email.com".
// It is possible to use both of these rules at the same time.
// Given an array of strings emails where we send one email to each emails[i], return the number of different addresses that actually receive mails.

// SOURCE CODE
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        int valid = 0;
        set<string> s;

        for(int i=0; i<n; i++){
            bool noskip = true, after = false;
            string str = "";
            for(char j:emails[i]){
                if(j == '+') if(!after) noskip = false;
                if(j == '@') after = true, noskip=true;
                if(noskip){
                    if(after){
                        str += j;
                    } else if(j != '.'){
                        str += j;
                    }
                }
            }
            s.insert(str);
            cout << str << endl;
        }
        valid = s.size();
        return valid;
    }
};