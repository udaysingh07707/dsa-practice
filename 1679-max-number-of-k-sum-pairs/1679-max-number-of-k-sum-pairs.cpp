class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        int n = nums.size();
        // int i = 0;
        // int j = n - 1;
        int count = 0;
        // while(i<j){
        //     int sum = nums[i] + nums[j];
        //     if(sum == k ){
        //         count++;
        //         i++;
        //         j--;
        //     }
        //     else if(sum > k){
        //         j--;
        //     }else{ 
        //         i++;
        //     }
        // }
        // return count;
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
            if(mp[nums[i]]>0){
                mp[nums[i]]--;
                count++;
            }else{
            mp[k - nums[i]]++;
            }
        }
        return count;

    }
};