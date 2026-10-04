class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n);
        unordered_map<int,int> mp;

        mp[0]++;
        int count = 0;
        prefix[0] = nums[0];
        count += mp[prefix[0]-k];
        mp[prefix[0]]++;
        for(int i = 1;i<n;i++){
            prefix[i] = prefix[i-1] +  nums[i];
            count += mp[prefix[i]-k];
            mp[prefix[i]]++;
        } 
        
        return count;
        
    }
};