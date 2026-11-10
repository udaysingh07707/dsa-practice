class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int noz = 0;
        int n = nums.size();
        int i = 0;
        int j = 0;
        int len = INT_MIN;
        while(j<n){
            if(nums[j] == 0) noz++;

            while(noz>k){
                if(nums[i] == 0) noz--;
                i++;
            }
            len = max(len,j-i+1);
            j++;
        }
        return len;
    }
};