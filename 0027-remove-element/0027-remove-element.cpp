class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int count = 0;
        while (j < n) {
            if (nums[j] == val) {
                j++;
                
            } else if (nums[i] == val) {
                swap(nums[i], nums[j]);
                i++;
                j++;
                count++;
            } else {
                i++;
                j++;
                count++;
            }
        }
        return count;
    }
};