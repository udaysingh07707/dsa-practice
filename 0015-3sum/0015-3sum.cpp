class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3) return {};
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        while (i < n - 2) {
            if(i>0 && nums[i] == nums[i-1] ){
            i++;
             continue;

            } 
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                
                 if (nums[i] + nums[j] + nums[k] == 0){
                    v.push_back({nums[i],nums[j],nums[k]});
                    k--;
                    j++;
                    while(j<k && nums[j-1] == nums[j]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                 }else if(nums[i] + nums[j] + nums[k] > 0) k--;
                 else j++;
            }
            i++;
        }
        return v;
    }
};