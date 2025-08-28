class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;   // final result to store all valid combinations
        vector<int> comb;          // current combination being built
        makeCombination(candidates, target, 0, comb, 0, res);
        return res;        
    }

private:
    void makeCombination(std::vector<int>& candidates, 
                         int target, 
                         int idx, 
                         vector<int>& comb, 
                         int total, 
                         vector<vector<int>>& res) {
        
        // Base case 1: if total equals target, we found a valid combination
        if (total == target) {
            res.push_back(comb);  // store a copy of the current combination
            return;
        }

        // Base case 2: if total exceeds target OR we run out of candidates
        if (total > target || idx >= candidates.size()) {
            return;
        }

        // Choice 1: Include candidates[idx] in the current combination
        comb.push_back(candidates[idx]);
        makeCombination(candidates, target, idx, comb, total + candidates[idx], res);
        comb.pop_back(); // backtrack: remove last element before exploring next choice

        // Choice 2: Skip candidates[idx] and move to the next candidate
        makeCombination(candidates, target, idx + 1, comb, total, res);
    }    
};
