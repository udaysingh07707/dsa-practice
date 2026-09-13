class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double avrg = INT_MIN;
        double sum = 0;
        int i = 0;
        for(int j = 0;j<n;j++){
            sum += nums[j];
            if(j>=k-1){
                if((sum/k) > avrg){
                    avrg = sum/k;
                } 
                sum -= nums[i];
                i++;
            }
        }
        return avrg;
    }
};