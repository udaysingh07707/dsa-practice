class Solution {
public:
    int atmostk(vector<int>& nums,int k){
        unordered_map<int,int> mp;
        int i = 0;
        int j = 0;
        int count = 0;
        int n = nums.size();
        while(j<n){
            mp[nums[j]]++;
            while(mp.size() > k){
              mp[nums[i]]--;
              if(mp[nums[i]] == 0) mp.erase(nums[i]);
              i++;
            }
            count += j-i+1;
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostk(nums,k) - atmostk(nums,k-1);
    }
};