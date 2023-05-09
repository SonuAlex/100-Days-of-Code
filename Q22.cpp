// Q22
// Given a square matrix mat, return the sum of the matrix diagonals.
// Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

// SOURCE CODE
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r = mat[0].size(), c = mat.size();
        int dSum1=0, dSum2=0;
        for(int i=0; i<r; i++){
            dSum1 = dSum1 + mat[i][i];
            if (i != r-i-1){
                dSum2 = dSum2 + mat[i][r-i-1];
            }
        }
        return dSum1+dSum2;
    }
};