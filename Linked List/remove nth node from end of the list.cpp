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
    int count(ListNode *head)
    {
        int c=0;
        while(head)
        {
            c++;
            head=head->next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* root=head;
        int c=count(head);
        if(c==n)
        {
            root=root->next;
            return root;
        }
        for(int i=1;i<c-n;i++)
        {
            root=root->next;
        }
        root->next=root->next->next;
        return head;
    }
};
