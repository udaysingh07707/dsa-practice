class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()){
            if(nums[i]<=0 || nums[i]>nums.size()){
                i++;
                continue;
            }
            int idx = nums[i]-1;
            if(i == idx||nums[idx] == nums[i]) {
            i++;
            }else{
            swap(nums[i],nums[idx]);
            } 
         }
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != i+1) return i+1;
        }
        return nums.size()+1 ;
    }
};