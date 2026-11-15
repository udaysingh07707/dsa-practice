class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        //? eliminate space using two pointer 
        vector<int> mx(n);
        vector<int> mn(n);
        int m = INT_MIN;
        int s = INT_MAX;
        int beauty = 0;
        for (int i = 0; i < n; i++) {
            m = max(nums[i], m);
            mx[i] = m;
        }
        for (int i = n - 1; i >= 0; i--) {
            s = min(nums[i], s);
            mn[i] = s;
        }
        for (int i = 1; i < n - 1; i++) {
            if ( nums[i] > mx[i-1] &&
                nums[i] < mn[i + 1])
                beauty += 2;
            else if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1])
                beauty++;
        }
        return beauty;
    }
};