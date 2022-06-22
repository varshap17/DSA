ListNode *moveToFront(ListNode *head)
    {
        if(head->next==NULL)
        {
            return head;
        }
        ListNode *p=head;
        ListNode *q=NULL;
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        p->next=head;
        q->next=NULL;
        return p;
    }
