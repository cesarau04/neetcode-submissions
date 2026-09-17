class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> solutionMap;

        for (const string& word : strs) {
            array<int, 26> arr{};
            for (char c : word) arr[c - 'a']++;
            solutionMap[arr].push_back(word);
        }

        vector<vector<string>> result;
        for (const auto& [key, group] : solutionMap) {
            result.push_back(group);
        }
        return result;
    }
};