class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        for (int r = numbers.size() - 1; r > l;) {
            int sum = numbers[l] + numbers[r];
            if (sum == target)
                return {l+1, r+1};
            if (sum < target)
                l++;
            else
                r--;
        }

        return {0,0}; //impossible since exercise stated so
    }
};
