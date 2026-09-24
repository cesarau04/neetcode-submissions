class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> postfix(n);
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            prefix[i] = (i == 0) ? nums[i] : prefix[i-1] * nums[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            postfix[i] = (i == n - 1) ? nums[i] : postfix[i+1] * nums[i];
        }

        for (int i = 0; i < n; i++) {
            int preValue = (i > 0) ? prefix[i-1] : 1;
            int postValue = (i < n - 1) ? postfix[i+1] : 1;
            result[i] = preValue * postValue;
        }
        return result;
    }
};