Node *merge(Node *a, Node *b)
{
    Node dummy=Node(0), *curr=&dummy;
    while(a && b)
    {
        if(a->data<b->data)
        {
            curr->bottom=a;
            a=a->bottom;
        }
        else
        {
            curr->bottom=b;
            b=b->bottom;
        }
        curr=curr->bottom;
    }
    if(a)
    {
        curr->bottom=a;
    }
    else
    {
        curr->bottom=b;
    }
    return dummy.bottom;
}
Node *flatten(Node *root)
{
    if(root==NULL || root->next==NULL)
    {
        return root;
    }
    root->next=flatten(root->next);
    root=merge(root,root->next);
    return root;
    
}
