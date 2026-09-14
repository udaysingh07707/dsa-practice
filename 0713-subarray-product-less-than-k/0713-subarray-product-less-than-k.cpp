class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n = nums.size();
        int i = 0;
       int count = 0;
        int p = 1;
        for(int j = 0;j<n;j++){
            p = p*nums[j];
            while( p>=k){
                p = p/nums[i];
                i++;
            }
            count += j-i+1;
        }
        return count;
    }
};