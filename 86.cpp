// Q86
// Cyclically rotate an array by one

// SOURCE CODE
void rotate(int arr[], int n){
    int a = arr[n-1];
    for(int i = n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = a;
}