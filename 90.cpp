// Q90
// Kth Smallest Integer

// SOURCE CODE
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr+l, arr+r+1);
        return arr[l+k-1];
    }
};