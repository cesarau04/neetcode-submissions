class Solution {
public:
    bool isPalindrome(string s) {
        erase_if(s, [](char c){ return !isalnum(c); });
        for (char& c : s) c = tolower(c);        
        
        int r = s.length()-1;
        for (int l = 0; l < s.length(); l++) {
            if (s[l] != s[r]) return false;
            r--;
        }

        return true;
    }
};
