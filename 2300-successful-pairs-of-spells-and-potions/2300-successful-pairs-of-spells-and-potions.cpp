class Solution {
public:
   
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        vector<int> v;
        sort(potions.begin(), potions.end());
        int m = potions.size();
        int n = spells.size();
        for (int i = 0; i < n; i++) {
            int l = 0;
            int h = m-1;
            while (l <= h) {
                int mid = l + (h - l) / 2;
                if ((long long)potions[mid] * (long long)spells[i] >= success) {
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            
            v.push_back(m-l);
        }
        return v;
    }
};