class Solution {
public:
    int subarr(vector<int>& v,int g){
        int n = v.size();
        int i = 0;
        int count = 0;
        int sum = 0;
        for(int j = 0;j<n;j++){
            sum += v[j];
            while(sum>g){
                sum -= v[i];
                i++;
            }
            count += j-i+1;
         }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return goal == 0?subarr(nums,goal):subarr(nums,goal) - subarr(nums,goal-1);
    }
};