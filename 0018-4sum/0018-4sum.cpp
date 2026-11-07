class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> v;
        int m = 0;
        int n = nums.size();
        while(m<n-3){

            if(m>0 && nums[m-1] == nums[m]){
             m++;
             continue;    
            }
            int i  = m+1;
            while(i < n-2){
                if(i>m+1 && nums[i-1] == nums[i]){
                    i++;
                    continue;
                }
                int j  = i+1;
                int k = n-1;
                 while(j<k){
                    long long  sum =  (long long)nums[i] + nums[j] + nums[k] + nums[m];
                    if(sum  ==  (long long)target){
                    v.push_back({nums[m],nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++; 
                    while(j<k && nums[k] == nums[k+1]) k--; 
                    } 
                    else if(sum > (long long)target ){
                        k--;
                    }else{
                        j++;
                    }
                 }
                 i++;
            }
            m++;
        }
        return  v;
        
    }
};