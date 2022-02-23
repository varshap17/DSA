//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
} Node;


 // } Driver Code Ends
//User function Template for C++

/*
typedef struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
} Node;
*/

class Solution {
public:
    int count(Node *start)
    {
        int c=0;
        while(start)
        {
            start=start->next;
            c++;
        }
        return c;
    }
    Node *update(Node *start,int p)
    {
        if(start==NULL)
        {
            return start;
        }
        int c=count(start);
        if(p==c)
        {
            return start;
        }
        Node *s=start;
        for(int i=1;i<p;i++)
        {
            s=s->next;
        }
        Node *q=s->next;
        q->prev=NULL;
        s->next=NULL;
        s=q;
        while(s->next)
        {
            s=s->next;
        }
        s->next=start;
        start->prev=s;
        return q;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        struct node*start = NULL;
        struct node* cur = NULL;
        struct node* ptr = NULL;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ptr=new node(a);
            ptr->data=a;
            ptr->next=NULL;
            ptr->prev=NULL;
            if(start==NULL)
            {
                start=ptr;
                cur=ptr;
            }
            else
            {
                cur->next=ptr;
                ptr->prev=cur;
                cur=ptr;
            }
        }
        Solution obj;
        struct node*str=obj.update(start,p);
        while(1)
        {
            cout<<str->data<<" ";
            if(str->next==NULL)break;
            str=str->next;
        }
        while(str!=NULL)
        {
            cout<<str->data<<" ";
            str=str->prev;
        }
        cout<< "\n";   
    }
}

  // } Driver Code Ends
