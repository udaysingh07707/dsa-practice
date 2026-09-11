class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        int n = nums.size();
        int i = 0;
        
        while(i<=n-3){
            if(i>0 && nums[i] == nums[i-1]){
                i++;
                continue;
            }
            int j = i+1;
            int k = n-1;
            while(j<k){
                int ans = nums[i] + nums[j] + nums[k];
                if(ans == 0){
                    v.push_back({nums[i],nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
                else if(ans>0){
                    k--;
                }else{
                    j++;
                }
            }
            i++;

        }
        return v;
    }
};