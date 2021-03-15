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
    int kthSmallest(TreeNode* root, int k) {
        if(root == nullptr)
            return 0;
        int nums = 0;
        
        vector<int> l;
        stack<TreeNode*> s;
        
        TreeNode* p = root;
        
        while(!s.empty()||p!=nullptr)
        {
            while(p)
            {
                s.push(p);
                p = p->left;
            }
            TreeNode* tmp = s.top();
            s.pop();
            l.push_back(tmp->val);
            k--;
            if(k==0)
                return tmp->val;
            
            p = tmp->right;
        }
        
        return l[k-1];
    }
};
