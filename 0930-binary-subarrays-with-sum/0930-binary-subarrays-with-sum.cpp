class Solution {
public:
    int atmostK(vector<int>& nums, int goal){
        unordered_map<int,int> mp;
        int n = nums.size();
        int i = 0;
        int  j = 0;
        int sum = 0;
        int count = 0;
        while(j<n){
            sum += nums[j];
            while(sum>goal){
                sum -= nums[i];
                i++;
            }
            count += j-i+1;
            j++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return goal == 0?atmostK(nums,goal): atmostK(nums,goal) - atmostK(nums,goal-1);
    }
};