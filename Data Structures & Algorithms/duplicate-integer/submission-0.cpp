class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> countingSet;
        for (auto num : nums) {
            if (countingSet.contains(num)) return true;
            countingSet.insert(num);
        }
        return false;
    }
};