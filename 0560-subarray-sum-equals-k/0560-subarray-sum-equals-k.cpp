class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix;
        unordered_map<int,int> mp;

        mp[0]++;
        int count = 0;
        prefix = nums[0];
        count += mp[prefix-k];
        mp[prefix]++;
        for(int i = 1;i<n;i++){
            prefix +=   nums[i];
            count += mp[prefix-k];
            mp[prefix]++;
        } 
        
        return count;
        
    }
};