class Solution {
public:
    bool isValid(string s) {
        stack<char> stack_;
        for (auto& c : s) {
            if (c == '(' || c == '[' || c =='{')
            {
                stack_.push(c);
                continue;
            }
            else
            {
                if (stack_.size() == 0)
                    return false;
                if (c == ')' && stack_.top() != '(')
                    return false;
                if (c == ']' && stack_.top() != '[')
                    return false;
                if (c == '}' && stack_.top() != '{')
                    return false;
                stack_.pop();
            }
        }

        return !stack_.size();
    }
};
