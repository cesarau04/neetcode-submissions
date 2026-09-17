class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mapS;

        for (char c : s)
        {
            mapS[c] += 1;
        }

        for (char c : t)
        {
            if (!mapS.contains(c)) return false;
            mapS[c] -= 1;
            if (mapS[c] == 0) mapS.erase(c);
        }

        return !mapS.size();    
    }
};
