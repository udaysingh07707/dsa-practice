class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // for(int i = 0;i<nums.size();i++){
        //     for(int j = 0;j<nums.size()-1-i;j++){
        //         if(nums[j] == 0){
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }
        int j = -1;
        if(nums.size()==1) return;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0) {
                j = i;
                break;
            }
        }
        if(j==-1) return;

        for(int i = j+1;i<nums.size();i++){
            if(nums[i]!=0){
             swap(nums[j],nums[i]);
             j++;
            } 
        }
        
    }
};