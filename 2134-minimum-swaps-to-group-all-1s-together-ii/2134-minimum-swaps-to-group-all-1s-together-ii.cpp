class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                k++;
        }
        int i = 0;
        int j = 0;
        int noo = 0;
        int maxone = INT_MIN;
        for(int j = 0;j<2*n;j++){
            if (nums[j%n] == 1)
                noo++;
            if (j >= k - 1) {
                maxone = max(maxone, noo);
                if (nums[i%n] == 1)
                    noo--;
                i++;
            }
        }
        return k - maxone;
    }
};