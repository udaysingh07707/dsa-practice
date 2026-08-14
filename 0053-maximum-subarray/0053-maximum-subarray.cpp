class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int cur = nums[0];
        if(nums.size()==1) return nums[0];
        for(int i = 1;i<nums.size();i++){
            cur = max(nums[i],cur+nums[i]);
            sum  = max(sum,cur);

        }
        return sum;

    }
};