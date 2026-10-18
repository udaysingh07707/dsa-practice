class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int a,int b){
            return to_string(a) + to_string(b) > to_string(b) + to_string(a);
        });
        if(nums[0] == 0) return "0";
        string s = "";
        int n = nums.size();
        for(int i = 0;i<n;i++){
            s += to_string(nums[i]);
        }
        return s;
    }
};