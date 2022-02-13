#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


 // } Driver Code Ends
/*
 
  Node is defined as
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
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) 
    {
        if(head==NULL)
        {
            return NULL;
        }
        Node *p=head;
        Node *ans0=new Node(-1);
        Node *a=ans0;
        Node *ans1=new Node(-1);
        Node *b=ans1;
        Node *ans2=new Node(-1);
        Node *c=ans2;
        while(p)
        {
            if(p->data==0)
            {
                Node *t=new Node(0);
                ans0->next=t;
                ans0=ans0->next;
            }
            else if(p->data==1)
            {
                Node *t=new Node(1);
                ans1->next=t;
                ans1=ans1->next;
            }
            else if(p->data==2)
            {
                Node *t=new Node(2);
                ans2->next=t;
                ans2=ans2->next;
            }
            p=p->next;
        }
        a=a->next;
        b=b->next;
        c=c->next;
        if(!a & !b)
        {
            return c;
        }
        if(b==NULL)
        {
            ans0->next=c;
            return a;
        }
        if(a==NULL)
        {
            ans1->next=c;
            return b;
        }
        ans0->next=b;
        ans1->next=c;
        return a;
    }
};


// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  // } Driver Code Ends
