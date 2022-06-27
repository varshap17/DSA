Node *merge(Node *head1, Node *head2)
    {
        Node *head=new Node(-1);
        Node *curr=head;
        while(head1 && head2)
        {
            if(head1->data<head2->data)
            {
                curr->next=head1;
                head1=head1->next;
            }
            else
            {
                curr->next=head2;
                head2=head2->next;
            }
            curr=curr->next;
        }
        if(head1)
        {
            curr->next=head1;
        }
        else
        {
            curr->next=head2;
        }
        head=head->next;
        return head;
    }
    Node* mergeSort(Node* head) 
    {
        if(!head || !head->next)
        {
            return head;
        }
        Node *slow=head;
        Node *fast=head;
        Node *prev=NULL;
        while(fast && fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=NULL;
        Node *head1=mergeSort(head);
        Node *head2=mergeSort(slow);
        return merge(head1,head2);
    }
