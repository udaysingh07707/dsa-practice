class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()){
            int crtidx = nums[i]-1;
            if(i == crtidx){
            i++;
            } 
            else{
                if(nums[i] == nums[crtidx]) return nums[i];
                else swap(nums[i],nums[crtidx]);
            }
        }
        return 100;
    }
};