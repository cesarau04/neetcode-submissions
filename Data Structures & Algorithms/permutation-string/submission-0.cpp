class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        // build the array with freq
        array<int, 26> solutionArr{};
        for (auto& c : s1) {
            solutionArr[c-'a'] += 1;
        }

        int l = 0;
        for (int r = s1.size()-1; r < s2.size(); r++) {
            array<int, 26> candidate{};
            for (int i = l; i <= r; i++){
                candidate[s2[i] - 'a'] += 1;
            }

            if (candidate == solutionArr)
                return true;
            l++;
        }

        return false;
    }
};
