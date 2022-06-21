void removeLoop(Node* head)
    {
        Node *p=head;
        Node *q=head;
        while(p && p->next)
        {
            q=q->next;
            p=p->next->next;
            if(p==q)
            {
                break;
            }
        }
        if(p==NULL || p->next==NULL)
        {
            return ;
        }
        q=head;
        while(q!=p)
        {
            q=q->next;
            p=p->next;
        }
        while(p->next!=q)
        {
            p=p->next;
        }
        p->next=NULL;
    }
