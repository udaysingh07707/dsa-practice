class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> v(n);
        v[n-1] = 0;
        st.push(n-1);
        int notvi = 0;
        for(int i = n-2;i>=0;i--){
            int count = 0;
            while(st.size() > 0 && heights[i] > heights[st.top()]){
                count++;
                st.pop();
        
            }
            if(!st.empty()){
                v[i] = count+1;
            }else{
                v[i] = count;
            }
            st.push(i);
        }
        return v;
    }
};