void deleteNode(struct Node **head, int key)
{
    Node *p=*head;
    Node *q=NULL;
    while(p->data!=key)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    delete(p);
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
    Node *temp=NULL;
    Node *q=NULL;
    Node *t=*head_ref;
    Node *p=t;
    do
    {
        temp=p->next;
        p->next=q;
        q=p;
        p=temp;
    }while(p!=t);
    p->next=q;
    *head_ref=q;

}
