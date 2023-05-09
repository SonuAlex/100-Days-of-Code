// Q23
// There is a programming language with only four operations and one variable X:
// ++X and X++ increments the value of the variable X by 1.
// --X and X-- decrements the value of the variable X by 1.
// Initially, the value of X is 0.

// SOURCE CODE
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0, len = operations.size();
        for(int i=0; i<len; i++){
            if (operations[i] == "X++" || operations[i] == "++X"){
                count++;
            } else {
                count--;
            }
        }
        return count;
    }
};