class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack_.push_back(val);

        if (min_stack.size())
        {
            int it = min_stack.back();
            min_stack.push_back(min(it,val));
        }
        else
        {
            min_stack.push_back(val);
        }
    }
    
    void pop() {
        stack_.pop_back();
        min_stack.pop_back();
    }
    
    int top() {
        return stack_.back();
    }
    
    int getMin() {
        return min_stack.back();
    }

protected:
    vector<int> stack_;
    vector<int> min_stack;
};
