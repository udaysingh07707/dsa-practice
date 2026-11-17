class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
            mp[i] = -1;
            while(!st.empty() && prices[st.top()] >= prices[i]){
                mp[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        for(int i = 0;i<n;i++){
            mp[i] == -1?v.push_back(prices[i]):v.push_back(prices[i] -  prices[mp[i]]);
        }
        return v;
    }
};