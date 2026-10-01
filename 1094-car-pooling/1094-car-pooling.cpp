class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int maxhour = 0;
        for(int i = 0;i<trips.size();i++){
            maxhour = max(maxhour,trips[i][2]);
        }
        vector<int> v(maxhour+1,0);
        vector<int> prefix(maxhour+1);
        for(int i = 0;i<trips.size();i++){
            v[trips[i][1]] += trips[i][0];
            v[trips[i][2]] -= trips[i][0];
        }
        prefix[0] = v[0];
        for(int i = 1;i<=maxhour;i++){
            prefix[i] += prefix[i-1] + v[i];
        }
        for(int i = 0;i<maxhour+1;i++){
            if(prefix[i] > capacity) return false;
        }
        return true;
    }
};