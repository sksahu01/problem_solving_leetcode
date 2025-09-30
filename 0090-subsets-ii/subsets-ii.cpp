class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        sort(nums.begin(), nums.end());  // Step 1: Sort to handle duplicates
        backtrack(nums, 0, subset, res);
        return res;
    }

private:
    void backtrack(vector<int>& nums, int start, vector<int>& subset, vector<vector<int>>& res) {
        // Add the current subset
        res.push_back(subset);

        // Explore further
        for (int i = start; i < nums.size(); i++) {
            // Step 2: Skip duplicates at the same recursion level
            if (i > start && nums[i] == nums[i - 1]) continue;

            subset.push_back(nums[i]);
            backtrack(nums, i + 1, subset, res);
            subset.pop_back(); // backtrack
        }
    }
};
