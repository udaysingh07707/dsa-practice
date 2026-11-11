class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> v = nums;
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                k++;
            v.push_back(nums[i]);
        }
        int i = 0;
        int j = 0;
        int noo = 0;
        int maxone = INT_MIN;
        while (j < v.size()) {
            if (v[j] == 1)
                noo++;
            if (j >= k - 1) {
                maxone = max(maxone, noo);
                if (v[i] == 1)
                    noo--;
                i++;
            }
            j++;
        }
        return k - maxone;
    }
};