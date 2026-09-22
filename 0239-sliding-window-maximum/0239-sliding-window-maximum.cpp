class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k == 1) return nums;
        vector<int> v;
        int  n = nums.size();
        deque<int> q;
        for(int i = 0;i<k;i++){
            if(q.empty()) q.push_back(i);
            else{
                while(!q.empty() && nums[i] > nums[q.back()]){
                    q.pop_back();
                }
                q.push_back(i);
            }
        }
      
        int i = 0;
        for(int j = k;j<n;j++){
           if(q.front() < i) q.pop_front();
             v.push_back(nums[q.front()]);
              while(!q.empty() && nums[j] >  nums[q.back()]){
                    q.pop_back();
                }
                q.push_back(j);
           i++;
        }
        if(q.front() < i)
        q.pop_front();
        v.push_back(nums[q.front()]); // for last el
        return v;
    }
};