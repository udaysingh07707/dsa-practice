class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int count = 0;
        int noz = 0;
        int noo = 0;
        while (j < n) {
            if (nums[j] == 1)
                noo++;
            else
                noz++;
            while (noz > 1) {
                if (nums[i] == 0)
                    noz--;
                else
                    noo--;
                i++;
            }

            count = max(count, noo);
            j++;
        }
        return count == n?count-1:count;
    }
};