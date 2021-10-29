
#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(struct Node *head)
    {
        struct Node *p=head;
        struct Node *q=NULL;
        struct Node *r=NULL;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
        return head;
    }
    struct Node* addTwoLists(struct Node* p, struct Node* q)
    {
        Node *first=reverse(p);
        Node *second=reverse(q);
        int carry=0;
        Node *head=new Node(0);
        struct Node* cur =head;
        while(first!=NULL || second!=NULL)
        {
            int a=(first==NULL)?0:first->data;
            int b=(second==NULL)?0:second->data;
            int sum=a+b+carry;
            carry=sum/10;
            sum=sum%10;
            
            cur->next = new Node(sum);
            cur=cur->next;
            
            if(first!=NULL)
            {
                first=first->next;
            }
            if(second!=NULL)
            {
                second=second->next;
            }
        }
        if(carry)
        {
            cur->next=new Node(carry);
        }
        return reverse(head->next);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
