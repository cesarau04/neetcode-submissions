/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& v) {
        if (v.size() < 1) return true;

        sort(v.begin(), v.end(), [](const Interval& A, const Interval& B){
            return A.start < B.start;
        });

        for (int i = 1; i < v.size(); i++) {
            if (v[i].start < v[i-1].end)
                return false;
        }

        return true;
    }
};
