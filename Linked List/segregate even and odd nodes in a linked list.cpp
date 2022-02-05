//Initial template for C++

#include <bits/stdc++.h>
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
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
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
class Solution{
public:
    Node* divide(int N, Node *head)
    {
        Node *ev=NULL;
        Node *od=NULL;
        Node *p=NULL;
        Node *q=NULL;
        while(head)
        {
            if(head->data%2==0)
            {
                if(ev==NULL)
                {
                    ev=head;
                    p=head;
                }
                else
                {
                    ev->next=head;
                    ev=ev->next;
                }
            }
            else
            {
                if(od==NULL)
                {
                    od=head;
                    q=head;
                }
                else
                {
                    od->next=head;
                    od=od->next;
                }
            }
            head=head->next;
        }
        if(ev)
        {
            ev->next=q;
        }
        if(od)
        {
            od->next=NULL;
        }
        if(ev)
        {
            return p;
        }
        else
        {
            return q;
        }
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends
