class Solution {
public:
    vector<int> partitionLabels(string s) {
        // buils last position map
        unordered_map<char, int> last_map;
        int i = 0;
        for (auto& c : s)
        {
            last_map[c] = i++;
        }

        int size = 0;
        int end = 0;
        vector<int> result;
        i = 0;
        for (auto& c : s)
        {            
            int new_end = last_map[c];
            if (new_end > end)
            {
                end = new_end;
            }

            size++;
            if (i == end)
            {
                result.push_back(size);
                size = 0;
            }
            i++;
        }
        return result;
    }

};
