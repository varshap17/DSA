int countTriplets(struct Node* head, int x) 
{ 
    unordered_set<int> m;
    Node* p=head;
    int count=0;
    while(p)
    {
        Node *q=p->next;
        while(q)
        {
            if(m.count(x-p->data-q->data))
            {
                count++;
            }
            q=q->next;
        }
        m.insert(p->data);
        p=p->next;
    }
    return count;
} 
