class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> cache (m, vector<int>(n, -1));
        pair<int, int> goal = {m - 1, n - 1}; 
        function<int(int,int)> dfs = [&](int r, int c) -> int
        {
            if (r > goal.first || c > goal.second)
            {
                return 0;
            }

            if (r == goal.first && c == goal.second)
            {
                return 1;
            }

            if (cache[r][c] != -1)
                return cache[r][c];

            int result = dfs(r+1, c) + dfs(r, c+1);
            cache[r][c] = result;  // save before returning
            return result;
        };

        int result = dfs(0,0);
        return result;
    }
};
