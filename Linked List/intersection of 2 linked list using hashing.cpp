ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        unordered_map<ListNode*,int> m;
        while(headA)
        {
            m[headA]++;
            headA=headA->next;
        }
        while(headB)
        {
            if(m.find(headB)!=m.end())
            {
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
