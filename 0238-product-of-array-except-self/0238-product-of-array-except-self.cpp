class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //there i made two arr pre suf but wirte code acc so it adjust in the one
        int n = nums.size();
        vector<int> pre(n);
        int p = 1;
        for(int i = 0;i<nums.size();i++){
          pre[i] = p;
          p *= nums[i];
        }
        int p2  = 1;
        for(int i = n-1;i>=0;i--){
            pre[i] *= p2;
            p2 *= nums[i];
        }
       
        return pre;
    }
};