// Q97
// Print numbers from 1 to N without the help of loops.

// SOURCE CODE
class Solution{
    public:
    //Complete this function
    void printNos(int N){
        //Your code here
        if(N == 1){
            cout << 1 << ' ';
        } else {
            printNos(N-1);
            cout << N << ' ';
        }
    }
};