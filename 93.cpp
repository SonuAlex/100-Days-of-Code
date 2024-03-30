// Q93
// Second Largest Element in the array

// SOURCE CODE
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    set<int, greater<int>> res;
        for(int i=0; i<n; i++){
            res.insert(arr[i]);
        }
        n = res.size();
	    if(n > 1){
	        auto it = res.begin();
	        it++;
	        return *it;
	    } else {
	        return -1;
	    }
	}
};