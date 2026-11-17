class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> v(n);
        st.push(n-1);
        v[n-1] = 0;
        for(int i = n-2;i>=0;i--){
            while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()) v[i] = 0;
            else v[i] = st.top() - i;
            st.push(i);
        }
        return v;

    }
};