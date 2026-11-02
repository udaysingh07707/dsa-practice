class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            if( mp.count(target - nums[i])){
                auto it = mp.find(target - nums[i]);
                return {it->second,i};
            } 
            mp.insert({nums[i],i});
        }
       return {} ;
    }
};