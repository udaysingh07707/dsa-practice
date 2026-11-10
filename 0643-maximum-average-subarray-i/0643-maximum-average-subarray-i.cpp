class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double avrg = INT_MIN;
        int j = 0;
        int i = 0;
        int n = nums.size();
        while(j<n){
            sum += nums[j];

            if(j>=k-1){
                avrg = max(avrg,sum/k);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return avrg;
    }
};