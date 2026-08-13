class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
      
        for(int i = 0;i<n;i++){
            int old = nums[i]%n;
            int newvalue = nums[old]%n;
            nums[i] = old + newvalue*n;
        }
        for(int i =0;i<n;i++){
            nums[i] = nums[i]/n;
        }
        return nums;
    }
};