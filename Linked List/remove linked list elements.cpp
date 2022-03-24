/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode *p=head;
        ListNode *q=NULL;
        while(head && head->val==val)
        {
            p=head;
            head=head->next;
            delete(p);
        }
        p=head;
        while(p && p->next)
        {
            if(p->val!=val)
            {
                q=p;
                p=p->next;
                continue;
            }
            ListNode *temp=p;
            q->next=p->next;
            p=p->next;
            delete temp;
        }
        if(p && p->val==val)
        {
            q->next=NULL;
            delete p;
        }
        return head;
    }
};
