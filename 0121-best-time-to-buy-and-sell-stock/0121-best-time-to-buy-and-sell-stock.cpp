class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> v(n);
        int m = INT_MIN;
        int ans = INT_MIN;
        for (int i = n - 1; i >= 0; i--) {
            m = max(prices[i], m);
            ans = max(ans, m - prices[i]);
        }
        return ans;
    }
};