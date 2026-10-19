class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = n-1;
        int first = -1;
        int last = -1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid] == target){
                first = mid;
                h = mid-1;
            }else if(nums[mid] > target){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        l = 0;
        h = n-1;
        while(l<=h){
            int  mid = l + (h-l)/2;
            if(nums[mid] == target){
                last = mid;
                l = mid+1;
            }else if(nums[mid] > target){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return {first,last};
    }
};