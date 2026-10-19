class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l  = 0;
        int h = nums.size()-1;
        int idx = nums.size();
        while(l<=h){
         int mid = l + (h-l)/2;
         if(nums[mid] == target){
            return mid;
         } else if(nums[mid] > target){
            idx = mid;
            h = mid-1;
         }  else{
            l = mid+1;
         }
        }
        return idx;
    }
};