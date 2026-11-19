class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n);
        vector<int> nse(n);
        stack<int> st;
        long long count = 0;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[i] <= arr[st.top()]) {
                st.pop();
            }
            if (st.empty())
                pse[i] = -1;
            else
                pse[i] = st.top();
            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[i] < arr[st.top()]) {
                st.pop();
            }
            if (st.empty())
                nse[i] = n;
            else
                nse[i] = st.top();
            st.push(i);
        }
        int s = 0;
        int e = 0;
        const int  MOD = 1e9+7;
        for (int i = 0; i < n; i++) {
            s = i - pse[i];
            e = nse[i] - i;
            count   = (count +  1LL*arr[i] * s * e)%(MOD);
        }
        return count;
    }
};