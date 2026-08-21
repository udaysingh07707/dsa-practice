class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int v1 = INT_MAX;
        int v2 = INT_MAX;
        for(int i =0;i<nums.size();i++){
            if(nums[i] <= v1) v1 = nums[i];
            else if(nums[i] <= v2) v2 = nums[i];
            else return true;
        }
        return false;

    }
};