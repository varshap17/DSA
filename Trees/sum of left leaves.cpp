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
    int ans(TreeNode *root,bool a)
    {
        if(!root)
        {
            return 0;
        }
        if(!root->left && !root->right && a)
        {
            return root->val;
        }
        return ans(root->left,true)+ans(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        return ans(root,false);
    }
};
