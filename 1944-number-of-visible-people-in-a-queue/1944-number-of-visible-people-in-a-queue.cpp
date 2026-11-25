class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> v(n);
        stack<int> st;
        for(int i = n-1;i>=0;i--){
           
           int count = 0;
            while(!st.empty() && heights[i] > heights[st.top()] ){
                count++;
                st.pop();
            }
            if(st.empty()) v[i] = count;
            else v[i] = count+1;
            st.push(i);
        }
        return v;
    }
};