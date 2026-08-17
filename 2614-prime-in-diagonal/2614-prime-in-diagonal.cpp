class Solution {
public:
        bool chk(int n){
            if(n<2) return false;
            for(int i = 2;i<=sqrt(n);i++){
                if(n%i == 0) return false; 
            }
            return true;
        }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int mx = 0;
       for(int i = 0;i<n;i++){
        if(chk(nums[i][i])){
            mx = max(nums[i][i],mx);
        }
        if(chk(nums[i][n-1-i])){
            mx = max(nums[i][n-1-i],mx);
        }
       }
       return mx;
    }
};