class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> mn(n);
        int m = INT_MIN;
        int s = INT_MAX;
        int beauty = 0;
       
        for (int i = n - 1; i >= 0; i--) {
            s = min(nums[i], s);
            mn[i] = s;
        }
        int mx = nums[0];
        for (int i = 1; i < n - 1; i++) {
            if ( nums[i] > mx &&
                nums[i] < mn[i + 1])
                beauty += 2;
            else if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1])
                beauty++;
                mx = max(nums[i],mx);
        }
        return beauty;
    }
};