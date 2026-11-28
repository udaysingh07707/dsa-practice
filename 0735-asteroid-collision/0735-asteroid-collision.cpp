class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        int n = asteroids.size();
        st.push(asteroids[0]);
        for (int i = 1; i < n; i++) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            } else {
                while (!st.empty() && st.top() > 0 && asteroids[i] < 0 &&
                       abs(asteroids[i]) > st.top())  st.pop();
                if(st.empty() || st.top() < 0) st.push(asteroids[i]);
                else if(st.top() == abs(asteroids[i])) st.pop();
            }
        }
        vector<int> v(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            v[i] = st.top();
            st.pop();
        }
        return v;
    }
};