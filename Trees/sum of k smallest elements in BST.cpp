int sum(Node* root, int k) 
{ 
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp=q.front();
        ans.push_back(temp->data);
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
        q.pop();
    }
    sort(ans.begin(),ans.end());
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=ans[i];
    }
    return sum;
    
} 
