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
    bool mirror(TreeNode *a, TreeNode *b)
    {
        if(a==NULL && b==NULL)
        {
            return 1;
        }
        if(a==NULL || b==NULL)
        {
            return 0;
        }
        if(a->val != b->val)
        {
            return 0;
        }
        return (mirror(a->left,b->right)&&mirror(a->right,b->left));
    }
    bool isSymmetric(TreeNode* root) 
    {
        return mirror(root->left,root->right);
    }
};
