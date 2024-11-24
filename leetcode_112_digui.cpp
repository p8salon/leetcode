/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        bool ret = false;
        
        if(root == nullptr)
            return ret;
        
        if(root->left == nullptr && root->right == nullptr)
            return root->val == sum;
        
        ret |= hasPathSum(root->left, sum - root->val);
        ret |= hasPathSum(root->right, sum - root->val);
        
        return ret;
    }
};
