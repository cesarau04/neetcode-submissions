class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;

        auto squaresum = [](int num) -> int {
            vector<int> digits;

            while (num > 0) {
                digits.push_back(num % 10);
                num /= 10;
            }

            int sum = 0;
            for (int d : digits) {
                sum += d * d;
            }

            return sum;
        };

        int res = n;
        while (true)
        {
            res = squaresum(res);
            if (res == 1)
            {
                return true;
            }
            if (seen.contains(res))
                return false;
            seen.insert(res);
        }
    }
};