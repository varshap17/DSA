

/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data)
{
    DoublyLinkedListNode *p=llist;
    DoublyLinkedListNode *n=new DoublyLinkedListNode(data);
    n->prev=NULL;
    n->next=NULL;
    if(p==NULL)
    {
        p=n;
        return p;
    }
    while(n->data>p->data && p->next!=NULL)
    {
        p=p->next;
    }
    while(p->next==NULL && n->data>p->data)
    {
        n->prev=p;
        p->next=n;
        return llist;
    }
    n->prev=p->prev;
    p->prev=n;
    n->next=p;
    if(n->prev!=NULL)
    {
        n->prev->next=n;
    }
    if(n->prev==NULL)
    {
        n->next=p;
        p->prev=n;
        p=n;
        return p;
    }
    return llist;
}
