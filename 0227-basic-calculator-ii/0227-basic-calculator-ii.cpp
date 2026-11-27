class Solution {
public:
    int calculate(string s) {
        int n = s.length();
        stack<int> st;
        int ans = 0;
        char op = '+';

        for (int i = 0; i < n; i++) {
            while (i < n && s[i] == ' ')
                i++;
            int nums = 0;
            while (i < n && isdigit(s[i])) {
                nums = nums * 10 + (s[i] - '0');
                i++;
            }
           

            if (op == '+')
                st.push(nums);
            else if (op == '-')
                st.push(-nums);
            else if (op == '*') {
                int prev = st.top();
                st.pop();
                st.push(prev * nums);
            } else if (op == '/') {
                int prev = st.top();
                st.pop();
                st.push(prev / nums);
            }
            while (i < n && s[i] == ' ')
                i++;
            if (i < n){
                op = s[i];
            }
        
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};