class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> v(n);
        stack<int> st;
        v[n-1] = 0;
        st.push(n-1);
        for(int i = n-2;i>=0;i--){
            while(st.size()>0 && temperatures[i] >= temperatures[st.top()]){
                st.pop();
            }
             if(st.empty()){
                v[i] = 0;
             }else{
                v[i] = st.top() - i;
             }
             st.push(i);
        }
        return v;
    }
};