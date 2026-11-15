class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
      
        vector<int> v(n+1);
        vector <int> ans(n);
        for (auto a : bookings) {
            v[a[0] - 1] += a[2];
            v[a[1]] -= a[2];
        }
        int sum = 0;
       for(int i = 0;i<n;i++){
        sum += v[i];
        ans[i] = sum;
       }
       return ans;
    }
};