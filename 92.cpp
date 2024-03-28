// Q92
// Find all pairs with a given sum

// SOURCE CODE
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here
        sort(A, A+N);
        sort(B, B+M);
        vector<pair<int, int>> res;
        int i=0;
        while(i<N){
            int j=0;
            while(j<M){
                if((A[i]+B[j]) == X){
                    res.push_back(make_pair(A[i], B[j]));
                }else if((A[i]+B[j]) > X){
                    break;
                }
                j++;
            }
            i++;
        }
        return res;
    }
};