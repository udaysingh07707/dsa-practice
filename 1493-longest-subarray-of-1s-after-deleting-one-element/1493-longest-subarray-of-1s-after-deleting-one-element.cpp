class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int n = nums.size(); 
       int del = 0;
       int len = 0;
       int i = 0;
       for(int j  = 0;j<n;j++){
        if(nums[j] == 0) del++;
        while(del > 1){
            if(nums[i] == 0) del--;
            i++;
        }
        len = max(len,j-i);
       }
       return len;
    //    int i = 0;
    //    int j = 0;
    //    while(j<n){
    //     if(nums[j] == 1){
    //         j++;
    //     }else{
    //         if(!del){
    //             j++;
    //             del = 1;
    //         }else{
    //             len = max(len,j-i-1);
    //             while(nums[i] != 0){
    //                 i++;
    //             }
    //             i++;
    //             del--;
    //         }
    //     }
    //    }
    //     len = max(len,j-i-1);
    //    return len;
    }
};