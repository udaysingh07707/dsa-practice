class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0;
        int j = 0;
        int n  = arr.size();
        int sum = 0;
        int count = 0;
        while(j<n){
            sum += arr[j];
            if(j>=k-1){
                double avrg = sum/k;
                if(avrg >= threshold ) count++;
                sum -= arr[i];
                i++;
            }
            j++;

        }
        return count;
    }
};