class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int count = 0;
        int i = 1;
        int j = 2;
        int n = nums.size();
        // while(j<n){
        //     if(nums[j] == nums[i]){
        //         if(count >0){
        //          j++;
        //         }else{
        //             i++;
        //             swap(nums[i],nums[j]);
        //             count++;
        //             j++;
        //         }

        //     }else if(nums[j] > nums[i]){
        //         i++;
        //         swap(nums[i],nums[j]);
        //         count = 0;
        //         j++;
        //     }else{
        //         j++;
        //     }
        // }
        // return i+1;
        if(nums.size() <= 2) return nums.size();
        while(j<n){
            if(nums[i-1] == nums[j]){
                j++;
            }else{
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        return i+1;

    }
};