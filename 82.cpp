// Q82
// Reverse First K elements of Queue

// SOURCE CODE
class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> p, int k) {
        queue<int> res;
        int arr[k];
        int n = p.size();
        
        for(int i=0; i<k; i++){
            arr[i] = p.front();
            p.pop();
        }
        for(int i=k-1; i>=0; i--){
            res.push(arr[i]);
        }
        for(int i=k; i<n; i++){
            res.push(p.front());
            p.pop();
        }
        return res;
    }
};