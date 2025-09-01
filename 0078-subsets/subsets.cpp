class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;   // stores all subsets
        vector<int> subset;        // current subset
        backtrack(0, nums, subset, res);
        return res;
    }

private:
    void backtrack(int index, vector<int>& nums, vector<int>& subset, vector<vector<int>>& res) {
        // Base case: when we reach the end, add current subset to result
        if (index == nums.size()) {
            res.push_back(subset);
            return;
        }

        // Choice 1: Include nums[index]
        subset.push_back(nums[index]);
        backtrack(index + 1, nums, subset, res);

        // Backtrack: remove last element
        subset.pop_back();

        // Choice 2: Exclude nums[index]
        backtrack(index + 1, nums, subset, res);
    }
};
