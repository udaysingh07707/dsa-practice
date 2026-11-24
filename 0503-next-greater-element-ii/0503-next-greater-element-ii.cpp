class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> v(n,-1);
        for(int i = 0;i<2*n;i++){
            while(!st.empty() && nums[i%n] > nums[st.top()]){
                v[st.top()] = nums[i%n];
                st.pop();
            } 
            if(i<n){
            st.push(i);
            }
        }
        return v;

    }
};