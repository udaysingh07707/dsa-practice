class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int j = 0;
        int i = 0;
        int flip = 0;
        int len = 0;
        int idx = i;
        while(j<n){
            if(nums[j] == 1){
              j++;
            } else{
                if(flip<k){
                    flip++;
                    j++;
                }else{
                    len = max(len,j-i);
                    flip--;
                    while(nums[idx]!=0){
                        idx++;
                    }
                    idx = idx+1;
                    i = idx;
                }
            }
        }
       len = max(len,j-i);
        return len;
    }
};