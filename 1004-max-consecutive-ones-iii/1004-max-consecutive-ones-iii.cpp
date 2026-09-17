class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int n = nums.size();
       int i = 0;
       int j = 0;
        int idx = 0;
        int flip = 0;
        int len = INT_MIN;
        while(j<n){
            if(nums[j] == 1){
                j++;
            }else{
                if(flip<k){
                  flip++;
                  j++;  
                }else{
                    len = max(len,j-i);
                    while(nums[idx]!=0){
                        idx++;
                    }
                    idx++;
                    i = idx;
                    flip--;
                }
            }
        }
         len = max(len,j-i);
         return len;
    }
};