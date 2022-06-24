Node *merge(Node *head1,Node *head2)
{
    Node* head = new Node(-1);
    Node* curr = head;
    while (head1 and head2) 
    {
        if(head1->data <= head2->data) 
        {
            curr->next = head1;
            head1->prev = curr;
            head1 = head1->next;
        } 
        else 
        {
            curr->next = head2;
            head2->prev = curr;
            head2 = head2->next;
        } 
        curr = curr->next;
    }
    if (head1) 
    {
        curr->next = head1;
        head1->prev = curr;
    } 
    else if (head2) 
    {
        curr->next = head2;
        head2->prev = curr;
    }
    head = head->next;
    head->prev = NULL;
    return head;
}
struct Node *sortDoubly(struct Node *head)
{
	if (!head or !head->next)
	    return head;
	Node* slow = head;
	Node* fast = head;
	Node* prev = NULL;
	
	while (fast and fast->next) 
	{
	    prev = slow;
	    slow = slow->next;
	    fast = fast->next->next;
	}
	prev->next = NULL;
	slow->prev = NULL;
	
	Node* head1 = sortDoubly(head);
	Node* head2 = sortDoubly(slow);
	return merge(head1, head2);
}
