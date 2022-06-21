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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode *p=head;
        ListNode *res=NULL;
        ListNode *k=NULL;
        map<int,int> m;
        while(p)
        {
            m[p->val]++;
            p=p->next;
        }
        ListNode *t=head;
        for(auto x:m)
        {
            if(x.second==1)
            {
                ListNode *j=new ListNode(x.first);
                if(res==NULL)
                {
                    res=j;
                    k=res;
                }
                else
                {
                    res->next=j;
                    res=res->next;
                }
            }
        }
        return k;
    }
};
