LNode *middle(LNode *head)
    {
        LNode *slow=NULL;
        LNode *fast=head;
        while(fast && fast->next)
        {
            if(slow)
            {
                slow=slow->next;
            }
            else
            {
                slow=head;
            }
            fast=fast->next->next;
        }
        return slow;
    }
    TNode* sortedListToBST(LNode *head) 
    {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return new TNode(head->data);
        }
        LNode* md=middle(head);
        TNode *root=new TNode(md->next->data);
        LNode* nxt=md->next;
        md->next=NULL;
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(nxt->next);
        return root;
    }
