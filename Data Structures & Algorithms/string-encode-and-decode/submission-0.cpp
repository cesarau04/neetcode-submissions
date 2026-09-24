class Solution {
   public:
    string encode(vector<string>& strs) {
        string encodedStr;
        for (auto& str : strs) {
            encodedStr += format("{}#{}", str.length(), str);
        }
        cout << encodedStr << endl;
        return encodedStr;
    }

    vector<string> decode(string s) {
        vector<string> result;
        size_t i = 0;
        while (i < s.size()) 
        {
            size_t j = s.find('#', i); //4#hell5#world //j->1
            int len = stoi(s.substr(i, j)); // i->0 len->4
            result.push_back(s.substr(j+1, len));
            i = j + 1 + len;
        }
        return result;
    }
};
