class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v;
        // first index
        int low = 0,high = nums.size()-1,mid;
        int idx1;
        int flag = false;
        while(low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]==target){
                flag = true;
                idx1 = mid;
                high = mid-1;
            }else if(nums[mid]<target){
                low = mid+1;
            }else{
                high = mid -1;
            }
        }
        if(flag){
        v.push_back(idx1);
        }else{
            v.push_back(-1);
        }

        //last index
        int l = 0,h = nums.size()-1,m;
        int idx2;
        bool f= false;
        while(l<=h){
            m = l + (h-l)/2;
            if(nums[m]==target){
                f = true;
                idx2 = m;
                l = m+1;
            }else if(nums[m]<target){
                l = m+1;
            }else{
                h = m-1;
            }
        }
        if(f){
        v.push_back(idx2);
        }else{
            v.push_back(-1);
        }
        return v;
    }
};