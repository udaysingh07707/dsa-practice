
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m,vector<int>(n,-1));
        int top = 0;
        int right = n-1;
        int bottom = m-1;
        int left = 0;
        ListNode* temp = head;
        while(top<=bottom && left<=right){
            //top row
            for(int i = left;i<=right;i++){
                if(temp ==  nullptr) return v;
                v[top][i] = temp->val;
                temp = temp->next;
            }
            top++;

            //right row
            for(int i  = top;i<=bottom;i++){
                if(temp ==  nullptr) return v;
                v[i][right] = temp->val;
                temp = temp->next;
            }
            right--;

            //?bottom row
            if(top <= bottom){
                for(int i  = right;i>=left;i--){
                    if(temp ==  nullptr) return v;
                    v[bottom][i] = temp->val;
                    temp = temp->next;
                }
                bottom--;
            }

            //?left row
            if(right>=left){
                for(int i = bottom;i>=top;i--){
                    if(temp ==  nullptr) return v;
                    v[i][left] = temp->val;
                    temp = temp->next;
                }
            left++;
            }
        }
        return v;
    }
};