class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int i = 0;
        int j = 1;
        int n = nums.size();
        while(j<n){
            if(nums[j] == nums[i]){
                if(count >0){
                 j++;
                }else{
                    i++;
                    swap(nums[i],nums[j]);
                    count++;
                    j++;
                }

            }else if(nums[j] > nums[i]){
                i++;
                swap(nums[i],nums[j]);
                count = 0;
                j++;
            }else{
                j++;
            }
        }
        return i+1;
    }
};