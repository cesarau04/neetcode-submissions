class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts; // value, count
        for (auto& num : nums) {
            counts[num] += 1;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto& [key, value] : counts) {
            bucket[value].push_back(key);
        }

        vector<int> result;
        for (int i = bucket.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        return result;
    }
};
