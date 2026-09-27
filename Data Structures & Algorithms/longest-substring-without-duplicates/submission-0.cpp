class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen; // char -> last index seen
        int maxLen = 0;
        int start = 0; // left edge of current window
        // zxyzxyz
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (lastSeen.count(c) && lastSeen[c] >= start) {
                // duplicate is inside current window — move start past it
                start = lastSeen[c] + 1;
            }

            lastSeen[c] = i;
            maxLen = max(maxLen, i - start + 1);
        }

        return maxLen;
    }
};