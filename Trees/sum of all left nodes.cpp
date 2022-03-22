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
    int sumOfLeftLeaves(TreeNode* root) 
    {
        int sum=0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            if(temp)
            {
                while(q.front()!=NULL)
                {
                    if(temp->left)
                    {
                        sum=sum+temp->left->val;
                        q.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q.push(temp->right);
                    }
                    q.push(NULL);
                    q.pop();
                    temp=q.front();
                }
            }
            q.pop();
        }
        return sum;
    }
};
