struct Node* arrange(Node *head)
{
    Node *p=head;
    Node *cons=new Node(-1);
    Node *c=cons;
    Node *vow=new Node(-1);
    Node *v=vow;
    while(p)
    {
        if(p->data=='a' || p->data=='e' || p->data=='i' || p->data=='o' || p->data=='u')
        {
            Node *t=new Node(p->data);
            v->next=t;
            v=v->next;
        }
        else
        {
            Node *t=new Node(p->data);
            c->next=t;
            c=c->next;
        }
        p=p->next;
    }
    cons=cons->next;
    vow=vow->next;
    if(!vow)
    {
        return cons;
    }
    else
    {
        v->next=cons;
    }
    return vow;
}
