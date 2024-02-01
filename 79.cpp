// Q79
// Equillibrium Point

// SOURCE CODE
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> res;
        int max = 0;
        for(int i=n-1; i>=0; i--){
            if(a[i] >= max){
                max = a[i];
                res.push_back(a[i]);
            }
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};