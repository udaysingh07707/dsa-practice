class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int n = nums.size(); 
       int del = 0;
       int i = 0;
       int j = 0;
       int len = 0;
       while(j<n){
        if(nums[j] == 1){
            j++;
        }else{
            if(!del){
                j++;
                del = 1;
            }else{
                len = max(len,j-i-1);
                while(nums[i] != 0){
                    i++;
                }
                i++;
                del--;
            }
        }
       }
        len = max(len,j-i-1);
       return len;
    }
};