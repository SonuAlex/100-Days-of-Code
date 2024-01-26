// Q77
// Fractional Knapsack Problem

// SOURCE CODE


class Solution{
    public:
    static bool cmp(struct Item a, struct Item b){
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
    }

    double fractionalKnapsack(int W, Item arr[], int n){
        sort(arr, arr+n, cmp);
        double val = 0.0;
        
        for(int i=0; i<n; i++){
            if(arr[i].weight <= W){
                W -= arr[i].weight;
                val += arr[i].value;
            } else {
                val += arr[i].value * ((double)W/(double)arr[i].weight);
                break;
            }
        }
        return val;
    }
}