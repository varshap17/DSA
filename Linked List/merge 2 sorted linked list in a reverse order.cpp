#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

struct Node * mergeResult(struct Node *node1,struct Node *node2);

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }

        struct Node* result = mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/
Node* reverse(Node *head)
{
    Node *r=NULL;
    Node *q=NULL;
    Node *p=head;
    while(p)
    {
        r=q;
        q=p;
        q->next=r;
        p=p->next;
    }
    return q;
}
struct Node * mergeResult(Node *node1,Node *node2)
{
    Node *head;
    Node *p=NULL;
    while(node1 && node2)
    {
        if(node1->data<=node2->data)
        {
            Node *t=newNode(node1->data);
            t->next=p;
            p=t;
            node1=node1->next;
        }
        else if(node1->data>node2->data)
        {
            Node *t=newNode(node2->data);
            t->next=p;
            p=t;
            node2=node2->next;
        }
    }
    while(node1)
    {
        Node *t=newNode(node1->data);
        t->next=p;
        p=t;
        node1=node1->next;
    }
    while(node2)
    {
        Node *t=newNode(node2->data);
        t->next=p;
        p=t;
        node2=node2->next;
    }
    return p;
}
