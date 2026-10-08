class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> path;

        function<void(int,int)> dfs = [&](int start, int sum)
        {
            if (sum == target)
            {
                res.push_back(path);
                return;
            }

            for (int i = start; i < nums.size(); i++)
            {
                if (sum + nums[i] > target)
                    continue;

                path.push_back(nums[i]);
                dfs(i, sum + nums[i]);
                path.pop_back();
            }
        };

        dfs(0, 0);
        return res;
    }
};
