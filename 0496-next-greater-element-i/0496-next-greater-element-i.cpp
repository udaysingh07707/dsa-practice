class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;
        int k = nums1.size();
        vector<int> v(k);
        int n = nums2.size();
        for(int i = 0;i<n;i++){
            mp[nums2[i]] = -1;
            while(!st.empty() && st.top() < nums2[i]){
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int i = 0;i<k;i++){
            v[i] = mp[nums1[i]];
        }
        return v;


    }
};