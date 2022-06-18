class Solution
{
    public:
    Node* reverse(Node *h)
    {
        Node *p=h;
        Node *q=NULL;
        Node *temp=NULL;
        while(p)
        {
            temp=p->next;
            p->next=q;
            q=p;
            p=temp;
        }
        return q;
    }
    Node* reverseBetween(Node* head, int m, int n)
    {
        Node *p=head;
        Node *s=NULL;
        int i=m;
        while(m>1)
        {
            s=p;
            p=p->next;
            m--;
        }
        Node *q=p;
        Node *temp=q;
        if(s!=NULL)
        {
            s->next=NULL;
        }
        while(i<n)
        {
            q=q->next;
            i++;
        }
        Node *r=q->next;
        q->next=NULL;
        Node *t=reverse(temp);
        if(s!=NULL)
        {
            s->next=t;
        }
        else
        {
            head=t;
        }
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=r;
        return head;
    }
};
