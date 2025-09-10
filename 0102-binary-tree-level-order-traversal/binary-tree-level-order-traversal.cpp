/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;  // if tree is empty

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();   // number of nodes at this level
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);   // store value of current node

                if (node->left) q.push(node->left);   // push left child
                if (node->right) q.push(node->right); // push right child
            }

            ans.push_back(level);   // add this level to answer
        }

        return ans;
    }
};
