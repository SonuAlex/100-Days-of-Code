// Q81
// Summed Matrix

// SOURCE CODE
class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        if(n*2 < q){
            return 0;
        } else {
            return n-abs(n-q+1);
        }
    }
};