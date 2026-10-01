class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mx  = INT_MIN;
        int maxvalue  =  0;
        for(int i = n-1 ;i>=0;i--){
            if(prices[i] > mx){
            mx = prices[i];
            prices[i] = 0;
            } else{
                prices[i] = mx-prices[i];
            }
            maxvalue = max(maxvalue,prices[i]);
        }
        return maxvalue;
        
    }
};