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
    long dfs(TreeNode* root, long targetSum) {
        long sum = 0;

        if (!root)
            return 0;

        if (targetSum == root->val)
            sum += 1;

        sum += dfs(root->left, targetSum - root->val);
        sum += dfs(root->right, targetSum - root->val);

        return sum;
    }

    int pathSum(TreeNode* root, int targetSum) {
        long sum = 0;

        if (!root)
            return 0;

        sum = dfs(root, targetSum);
        sum += pathSum(root->left, targetSum);
        sum += pathSum(root->right, targetSum);

        return sum;
    }
};