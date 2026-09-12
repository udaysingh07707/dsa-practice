class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i = 0;
       int j = 1;
       int n = nums.size();
       while(j<n){
        if(nums[j] > nums[i]){
            i++;
            swap(nums[i],nums[j]);
        }else{
            j++;
        }
       } 
       return i+1;
    }
};