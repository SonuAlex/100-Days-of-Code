// Q85
// Array Subset of another array

// SOURCE CODE
string isSubset(int a1[], int a2[], int n, int m) {
    for(int j=0; j<m; j++){
        bool isTru = false;
        for(int i=0; i<n; i++){
            if(a2[j] == a1[i]){
                isTru = true;
                a1[i] = 0;
                break;
            }
        }
        if(!isTru)
            return "No";
    }
    return "Yes";
}