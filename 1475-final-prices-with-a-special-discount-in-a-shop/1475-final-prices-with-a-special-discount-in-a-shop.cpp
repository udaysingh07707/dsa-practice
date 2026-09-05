class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> v(n);
        stack<int> st;
        st.push(prices[n-1]);
        v[n-1] = st.top();
        for(int i = n-2 ;i>=0;i--){
            while(st.size()>0 && prices[i] < st.top() ){
             st.pop();
            }
            if(st.empty()){
                v[i] = prices[i];
            }else{
                v[i] = prices[i] - st.top();
            }
            st.push(prices[i]);
        }
        return v;
    }
};