class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        int n = nums.size();
        vector<int> pr(n);
        vector<int> nx(n);
        stack<int> st;

        long long minimum = 0;
        long long maximum = 0;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[i] <= nums[st.top()]) {
                st.pop();
            }
            if (st.empty())
                pr[i] = -1;
            else
                pr[i] = st.top();
            st.push(i);
        }
        while (!st.empty())
            st.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[i] < nums[st.top()]) {
                st.pop();
            }
            if (st.empty())
                nx[i] = n;
            else
                nx[i] = st.top();
            st.push(i);
        }

        for (int i = 0; i < n; i++) {
            int s = i - pr[i];
            int e = nx[i] - i;
            minimum += 1LL * nums[i] * s * e ;
        }

        while (!st.empty())
            st.pop();

        fill(pr.begin(), pr.end(), 0);
        fill(nx.begin(), nx.end(), 0);


        for(int i = 0 ;i<n;i++){
             while(!st.empty() && nums[st.top()]<=nums[i]) st.pop();
             if(st.empty()) pr[i] = -1;
             else pr[i] = st.top();
             st.push(i);
        }
        while (!st.empty())
            st.pop();
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()] < nums[i]) st.pop();
            if(st.empty()) nx[i] = n;
            else nx[i] = st.top();
            st.push(i);
        }

        for(int i = 0;i<n;i++){
            int s  = i  - pr[i];
            int e  = nx[i] - i;
            maximum += 1LL * nums[i] * s * e;
        }

        return maximum - minimum;

    }
};