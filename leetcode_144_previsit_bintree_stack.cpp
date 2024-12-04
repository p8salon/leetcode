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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        stack<TreeNode *> stk;
        TreeNode* p = root;

        if (root) {
            stk.push(root);
            
        } else {
            return ret;
        }

        while (!stk.empty()) {
            p = stk.top();
            stk.pop();
            ret.push_back(p->val);
            if (p->right)
                stk.push(p->right);
            if (p->left)
                stk.push(p->left);
        }

        return ret;
    }
};