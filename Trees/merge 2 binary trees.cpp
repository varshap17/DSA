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
    TreeNode* merge(TreeNode* root1,TreeNode* root2)
    {
        if(root1 && root2)
        {
            root1->val+=root2->val;
        }
        if(root1->left && root2->left)
        {
            merge(root1->left,root2->left);
        }
        else if(!root1->left && root2->left)
        {
            root1->left=root2->left;
        }
        if(root1->right && root2->right)
        {
            merge(root1->right,root2->right);
        }
        else if(!root1->right && root2->right)
        {
            root1->right=root2->right;
        }
        return root1;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
    {
        if(root1==NULL && root2==NULL)
        {
            return NULL;
        }
        if(!root1)
        {
            return root2;
        }
        if(!root2)
        {
            return root1;
        }
        return merge(root1,root2);
    }
};
