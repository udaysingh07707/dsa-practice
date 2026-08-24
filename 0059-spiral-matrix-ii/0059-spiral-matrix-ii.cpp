class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        int count = 1;
        int top = 0;
        int right = n-1;
        int bottom = n-1;
        int left = 0;
        while(top<=bottom && left<=right){
            //top row
            for(int i = left;i<=right;i++){
                v[top][i] = count++;
            }
            top++;
            //right row
            for(int i  = top;i<=bottom;i++){
                v[i][right] = count++;
            }
            right--;

            //?bottom row
            if(top <= bottom){
                for(int i  = right;i>=left;i--){
                    v[bottom][i] = count++;
                }
                bottom--;
            }

            //?left row
            if(right>=left){
                for(int i = bottom;i>=top;i--){
                    v[i][left] = count++;
                }
            }
            left++;
        }
        return v;

    }
};