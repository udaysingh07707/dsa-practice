class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        for (int k = 0; k < n; k++) {
            sum += nums[k];
        }


        int sub = sum - x;
        if(sub == 0 ) return n;
        if(sub < 0) return -1;
        int i = 0;
        int j = 0;
        int s = 0;
        int len = 0;
        while (j < n) {
            s += nums[j];
            if(s == sub){
                len = max(len,j-i+1);
            }
            while(s > sub){
                s -= nums[i];
                i++;
            if(s == sub){
               
                len = max(len,j-i+1);
            }
            }
            j++;
        }
        return len == 0?-1: n - len;

    }
};