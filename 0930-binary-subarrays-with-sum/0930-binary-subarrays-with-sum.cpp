class Solution {
public:
    int subarray(vector<int>& nums,int goal){
        int i = 0;
        int j = 0;
        int sum = 0;
        int count = 0;
        while(j<nums.size()){
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
      return (goal ==0)?subarray(nums,goal): subarray(nums,goal) - subarray(nums,goal-1);

    }
};