class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }

    void backtrack(vector<string>& result, string current, int open, int close, int n) {
        if(current.size() == n * 2) {   // Base case: full valid string
            result.push_back(current);
            return;
        }

        if(open < n) {   // Add "(" if possible
            backtrack(result, current + "(", open + 1, close, n);
        }

        if(close < open) {   // Add ")" if possible
            backtrack(result, current + ")", open, close + 1, n);
        }
    }
};
