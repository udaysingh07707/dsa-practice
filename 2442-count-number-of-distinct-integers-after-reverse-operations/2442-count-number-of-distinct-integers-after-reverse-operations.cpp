class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        int num = 0;
        unordered_set<int> s;
        for(int i = 0;i<n;i++){
            int k = nums[i];
            while(k>0){
                num = num*10 + k%10;
                k = k/10;
            }
            s.insert(num);
            s.insert(nums[i]);
            num = 0;
        }
        return s.size();
       

    }
};