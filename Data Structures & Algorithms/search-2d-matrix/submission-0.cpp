class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int size = m * n;
        int l = 0;
        int r = size - 1;

        while(l <= r)
        {
            int i = (l + r) / 2;
            int index_row = i / n;
            int index_col = i % n;
            int value = matrix[index_row][index_col];
            if (value == target)
            {
                return true;
            }

            if (value < target)
            {
                l = i + 1;
            }
            else
            {
                r = i - 1;
            }
        }

        return false;
    }
};
