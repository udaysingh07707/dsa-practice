class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while(j<n){
           if(i%2 == 0 && nums[j]%2 == 0){
            swap(nums[i],nums[j]);
            i++;
           } else if(i%2 == 0 && nums[j]%2 != 0){
            j++;
           }else if(i%2!=0 && nums[j]%2 != 0){
            swap(nums[i],nums[j]);
            i++;
           }else{
            j++;
           }
        }
        return nums;
        
    }
};