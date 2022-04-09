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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *head=NULL;
        ListNode *root=NULL;
        int c=0;
        while(l1 && l2)
        {
            int sum=l1->val+l2->val+c;
            ListNode *t=new ListNode(sum%10);
            c=sum/10;
            if(root==NULL)
            {
                root=t;
                head=root;
            }
            else
            {
                root->next=t;
                root=root->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
            int sum=l1->val+c;
            ListNode *t=new ListNode(sum%10);
            c=sum/10;
            if(root==NULL)
            {
                root=t;
                head=root;
            }
            else
            {
                root->next=t;
                root=root->next;
            }
            l1=l1->next;
        }
        while(l2)
        {
            int sum=l2->val+c;
            ListNode *t=new ListNode(sum%10);
            c=sum/10;
            if(root==NULL)
            {
                root=t;
                head=root;
            }
            else
            {
                root->next=t;
                root=root->next;
            }
            l2=l2->next;
        }
        if(c)
        {
            ListNode *t=new ListNode(c);
            root->next=t;
        }
        return head;
    }
};
