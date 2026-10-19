class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> inter;
        sort(intervals.begin(),intervals.end());

        vector<int> last  = intervals[0];
        int n = intervals.size();
        if(n== 1) return {last};

        for(int i = 1;i<n;i++){
            vector<int> cur = intervals[i];
            if( cur[0] <= last[1]){
                last[1] = max(last[1],cur[1]);
            }else{
                inter.push_back(last);
                last = cur;
            }
        }  
        inter.push_back(last);
        return inter; 
    }
};