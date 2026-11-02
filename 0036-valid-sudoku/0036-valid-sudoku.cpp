class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> box[9];
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] != '.') {
                    if (row[i].count(board[i][j]))
                        return false;
                    row[i].insert(board[i][j]);

                    int boxindex = (i / 3) * 3 + (j / 3);

                    if (box[boxindex].count(board[i][j]))
                        return false;
                    box[boxindex].insert(board[i][j]);
                    if (col[j].count(board[i][j]))
                        return false;
                    col[j].insert(board[i][j]);
                }
            }
        }
        return true;
    }
};