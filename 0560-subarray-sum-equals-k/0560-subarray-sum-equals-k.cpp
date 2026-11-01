class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix = nums[0];
        unordered_map<int,int> mp;
        int count = 0;
        mp[0]++;
        count +=  mp[prefix-k];
        mp[prefix]++;
        for(int i = 1;i<n;i++){
            prefix += nums[i];
            count += mp[prefix-k];
            mp[prefix]++;
        }

        return count;
    }
};