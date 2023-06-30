// Q74
// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// SOURCE CODE
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int profit = 0;
        int mini = p[0];
        for(int i=0; i<p.size(); i++){
            mini = min(mini, p[i]);
            profit = max(profit, p[i]-mini);
        }
        return profit;
    }
};