class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            int c = 0;
            int el = nums[i];
            while(el!=0){
                el /= 10;
                c++;
            }
            if(c%2==0) count++;
        }
        return count;
    }
};