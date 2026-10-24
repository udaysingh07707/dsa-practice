class Solution {
public:

    int helper(vector<int>& nums,int mid){
        int narr = 1;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            if(sum + nums[i] <= mid ){
                sum += nums[i];
            }else{
                narr++;
                sum = nums[i];
            }
        }
        return narr;
    }
    int splitArray(vector<int>& nums, int k) {
        int mx = INT_MIN;
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            mx = max(nums[i],mx);
            sum += nums[i];
        }
        
        int l = mx;
        int h = sum;
        int ans;
        while(l<=h){
            int mid = l + (h-l)/2;
            int chk = helper(nums,mid);
            if(chk <= k){
                ans = mid;
                h = mid-1;
            }else if(chk > k){
                l = mid+1;
            }
        }
        return ans;
    }
};