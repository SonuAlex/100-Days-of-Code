// Q88
// Palindromic Array

// SOURCE CODE
bool isPal(int n){
    int t = 0, l = n;
    while(n > 0){
        t = t*10 + n%10;
        n = n/10;
    }
    if(t == l){
        return true;
    }
    return false;
}

int PalinArray(int a[], int n)
{
    for(int i=0; i<n; i++){
        if(!isPal(a[i])){
            return 0;
        }
    }
    return 1;
}