class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        vector<int> v(n,0);
        for(int i = 0;i<n;i++){
            while(!st.empty() && prices[i] <= prices[st.top()]){
                v[st.top()] = prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
             v[st.top()]  =  prices[st.top()];
             st.pop();
        }
        return v;
    }
};