class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int result = 0;
        int rows = grid.size();
        int columns = grid[0].size();

        function<void(int,int)> dfs = [&](int r, int c){
            if (r < 0 || c < 0 || r >= rows || c >= columns)
                return;

            char value = grid[r][c];
            if (value == '0')
                return;

            grid[r][c] = '0';
            dfs(r-1, c);
            dfs(r+1, c);
            dfs(r, c-1);
            dfs(r, c+1);
        };

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++) {
                if (grid[i][j] == '1')
                {
                    result++;
                    dfs(i, j);
                }
            }
        }
        return result;
    }
};