class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int minprice = INT_MAX;
        for(int i = 0;i<n;i++){
            minprice = min(prices[i],minprice);
            profit = max(profit,prices[i] - minprice);
        }
        return profit;
    }
};