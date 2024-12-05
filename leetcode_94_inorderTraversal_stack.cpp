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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode* > stk;
        vector<int> ret;
        TreeNode* p = root;
        if (!root)
            return ret;

        stk.push(p);
        while (!stk.empty()) {
             while (p->left) {
                stk.push(p->left);
                p = p->left;
            }

            TreeNode* tmp = stk.top();
            
            stk.pop();
            ret.push_back(tmp->val);
            if (tmp->right) {
                p = tmp->right;
                stk.push(tmp->right);
            }
        }

        return ret;
    }
};