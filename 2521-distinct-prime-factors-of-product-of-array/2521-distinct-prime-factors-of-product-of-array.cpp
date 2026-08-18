class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
       set<int> s;
       int n = nums.size();
       for(int i = 0;i<n;i++){
            int temp = nums[i];
        for(int j = 2;j*j<=temp;j++){
            while(temp%j == 0){
                s.insert(j);
                temp /= j;
            }
        }
        if(temp>1){
            s.insert(temp);
        }
        
       }
       return s.size();


    }
};