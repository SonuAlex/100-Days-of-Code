// Q99
// Given an array Arr of N positive integers and another number X. 
// Determine whether or not there exist two elements in Arr whose sum is exactly X.

// SOURCE CODE
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr, arr+n);
	    for(int i=0; i<n; i++){
	        for(int j=i+1; j<n; j++){
	            if(arr[i]+arr[j] > x)
	                break;
                else if(arr[i]+arr[j] == x)
                    return true;
	        }
	    }
	    return false;
	}
};