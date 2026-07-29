class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     vector<int> v;
    //    for(int i =0 ;i<nums.size();i++){
    //     int idx = abs(nums[i])-1;
    //     if(nums[idx] > 0){
    //         nums[idx] = -nums[idx];
    //     }
    //    }
    //    for(int i = 0;i<nums.size();i++){
    //         if(nums[i]>0){
    //             v.push_back(i+1);
    //         }
    //     }
    //     return v;

    int i = 0;
    while(i<nums.size()){
        int idx = nums[i]-1;
        if(i==idx) i++;
        else if(nums[i] == nums[idx]) i++;
        else swap(nums[i],nums[idx]);
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]-1 != i) v.push_back(i+1); 
    }
    return v;

    }
};