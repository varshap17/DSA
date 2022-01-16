#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    int count(Node *root)
    {
        int c=0;
        while(root)
        {
            c++;
            root=root->next;
        }
        return c;
    }
    Node* rotate(Node* head, int k)
    {
        if(head==0 || count(head)==k || k%count(head)==0)
        {
            return head;
        }
        Node *p=head;
        for(int i=0;i<k;i++)
        {
            p=p->next;
        }
        Node *q=p;
        while(p->next)
        {
            p=p->next;
        }
        Node *t=head;
        for(int i=0;i<k-1;i++)
        {
            t=t->next;
        }
        t->next=NULL;
        p->next=head;
        return q;
    }
};
    


// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
  // } Driver Code Ends
