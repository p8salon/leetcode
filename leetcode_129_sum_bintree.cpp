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
    int dfs(TreeNode* root, int presum) {
        if (!root)
            return 0;

        int sum = 0;

        sum = presum * 10 + root->val;
        if (!root->left && !root->right)
            return sum;

        int sum_l = dfs(root->left, sum);
        int sum_r = dfs(root->right, sum);

        return sum_l + sum_r;
    }
    int sumNumbers(TreeNode* root) {
        if (!root)
            return 0;

        return dfs(root, 0);
    }
};