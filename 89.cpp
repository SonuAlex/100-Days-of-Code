// Q89
// Sort an array of 0s, 1s and 2s

// SOURCE CODE
void sort012(int a[], int n){
    map<int, int> res;
    for(int i=0; i<n; i++){
        res[a[i]]++;
    }
    
    int index = 0;
    for(int i=0; i<res[0]; i++)
        a[index++] = 0;
    for(int i=0; i<res[1]; i++)
        a[index++] = 1;
    for(int i=0; i<res[2]; i++)
        a[index++] = 2;
}