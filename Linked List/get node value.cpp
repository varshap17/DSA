

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int getNode(SinglyLinkedListNode* llist, int positionFromTail) 
{
    SinglyLinkedListNode *p=llist;
    SinglyLinkedListNode *q;
    SinglyLinkedListNode *r;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    llist=q;
    while(positionFromTail--)
    {
        llist=llist->next;
    }
    return llist->data;
}


