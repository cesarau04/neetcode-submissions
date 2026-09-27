class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (board.size() == 0) return true;

        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> cols(9);
        vector<unordered_set<int>> groups(9);
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                int digit = board[i][j] - '0';
                if (digit < 1 || digit > 9)
                    continue;
                if (rows[i].count(digit))
                    return false;
                rows[i].insert(digit);
                
                if (cols[j].count(digit))
                    return false;
                cols[j].insert(digit);

                int boxIndex = (i/3) * 3 + (j/3);
                if (groups[boxIndex].count(digit))
                    return false;
                groups[boxIndex].insert(digit);
            }
        }

        return true;
    }
};

/**
//rows, colums, squares
[{}, {}, {}]
*/