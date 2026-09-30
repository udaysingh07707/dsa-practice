class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> v(n);
        vector<int> ans(queries.size());
        v[0] = arr[0];
        for(int i = 1;i<n;i++){
            v[i] = v[i-1]^arr[i]; 
        }
        for(int i = 0;i<queries.size();i++){
            if(queries[i][0] == 0){
                ans[i] = v[queries[i][1]];
            }else{

            ans[i] = v[queries[i][1]] ^ v[queries[i][0] - 1];
            }
        }
        return ans;


    }
};