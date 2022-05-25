Node *reverse(Node *root)
    {
        Node *r=NULL;
        Node *q=NULL;
        Node *p=root;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    Node* addOne(Node *head) 
    {
        head=reverse(head);
        Node *p=head;
        int c=0;
        if(p->data<9)
        {
            p->data=p->data+1;
            p=reverse(p);
            return p;
        }
        else
        {
            c=1;
            p->data=0;
            p=p->next;
        }
        while(p && p->data<=9)
        {
            int t=p->data+c;
            c=t/10;
            p->data=t%10;
            p=p->next;
        }
        if(c==1)
        {
            Node *l=new Node(1);
            head=reverse(head);
            l->next=head;
            return l;
        }
        head=reverse(head);
        return head;
    }
