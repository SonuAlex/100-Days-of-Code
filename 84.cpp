// Q84
// Fibonacci Series of First n numbers

// SOURCE CODE
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> ans;
        long long prev = 0;
        long long next = 1;
        long long sum = 0;
        
        ans.push_back(1);
        for(int i = 0; i < n-1; i++)
        {
            sum = prev+next;
            prev = next;
            next = sum;
            ans.push_back(sum);
        }
        return ans;
    }
};