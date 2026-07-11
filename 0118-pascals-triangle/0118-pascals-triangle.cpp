class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> m(numRows);
        for(int i = 0;i<m.size();i++){
            for(int j = 0;j<=i;j++){
                if(j == 0||j==i){
                    m[i].push_back(1);
                }else{
                    int val = m[i-1][j-1] + m[i-1][j];
                    m[i].push_back(val);
                }
            }
        }
        return m;
    }
};