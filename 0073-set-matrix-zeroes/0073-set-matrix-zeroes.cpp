class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int c = matrix[0].size();
        int r = matrix.size();
        int firstrow = false;
        int firstcol  = false;

        for(int i = 0;i<r;i++){
            for(int j =0;j<c;j++){
                if(matrix[i][j]==0){
                    if(i==0)
                        firstrow = true;
                    if(j == 0 )
                        firstcol = true;
                    
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for(int i = 1;i<r;i++){
            for(int j = 1;j<c;j++){
               if(matrix[i][0] == 0|| matrix[0][j] == 0){
                matrix[i][j] = 0;
               }
            }
        }
        
        if(firstrow){
            for(int i=0;i<c;i++){
                matrix[0][i] = 0;
            }
        }
        if(firstcol){
            for(int i=0;i<r;i++){
                matrix[i][0] = 0;
            }

        }
    
    }
};