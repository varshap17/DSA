//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void moveZeroes(struct Node **head);

// function to displaying nodes
void display(struct Node *head) {
    while (head != NULL) {
	    cout << head->data << " ";
	    head = head->next;
    }
    cout <<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int q;
        struct Node *Head=NULL;
        for(int i=0;i<n;i++)
        {
            cin>>q;
            push(&Head,q);
        }
        moveZeroes(&Head);
        display(Head);

    }
}
// } Driver Code Ends


//User function Template for C++
/* Linked List Node structure
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
// Move Zeros to the front of the list
void moveZeroes(struct Node **head)
{
    Node *p=*head;
    Node *zero=NULL;
    Node *z=zero;
    Node *h=NULL;
    Node *he=h;
    if(p->data==0)
    {
        zero=z=p;
    }
    else
    {
        he=h=p;
    }
    p=p->next;
    while(p)
    {
        if(p->data==0)
        {
            if(zero==NULL)
            {
                zero=z=p;
            }
            else
            {
                Node *t=new Node(p->data);
                zero->next=t;
                zero=zero->next;
            }
        }
        else
        {
            if(h==NULL)
            {
                h=he=p;
            }
            else
            {
                Node *t=new Node(p->data);
                h->next=t;
                h=h->next;
            }
        }
        p=p->next;
    }
    h->next=NULL;
    if(!z)
    {
        *head=he;
        return ;
    }
    zero->next=he;
    *head=z;
}
