void ans(Node *root,int input, int &mini)
{
    if(root==NULL)
    {
        return ;
    }
    ans(root->left,input,mini);
    ans(root->right,input,mini);
    if(root->data<input)
    {
        return ;
    }
    mini=min(mini,(root->data-input));
}
int findCeil(Node* root, int input) 
{
    if (root == NULL) 
    {
        return -1;
    }
    int mini=INT_MAX;
    ans(root,input,mini);
    return (input+mini);
}
