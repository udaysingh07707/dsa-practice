class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       int mx = INT_MIN;
       int s = 0;
       vector<int> v;
       for(auto a : trips){
        if(a[2]  > s){
        s = a[2];
        v.resize(s+1);
        } 
        v[a[1]] += a[0];
        v[a[2]] -= a[0];
       }
       int sum = 0;
       for(int k : v){
        sum += k;
        if(sum > capacity) return false; 
       }  
       return true; 
       

    }
};