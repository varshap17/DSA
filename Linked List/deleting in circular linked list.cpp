#include<iostream>
using namespace std;

struct Node 
{
	int data;
	struct Node *next;
}*first;

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=new Node;
	first->data=A[0];
	first->next=first;
	last=first;
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=A[i];
		t->next=last->next;
		last->next=t;
		last=t;
	}
}
void deleteelement(Node *p,int pos)
{
	Node* q;
	if(pos==1)
	{
		while(p->next!=first)
		{
			p=p->next;
		}
		if(p==first)
		{
			delete first;
			first=NULL;
		}
		else
		{
			p->next=first->next;
			delete first;
			first=p->next;
		}
    }
    else
    {
    	q=NULL;
    	for(int i=0;i<pos-1;i++)
    	{
    		q=p;
    		p=p->next;
		}
		q->next=p->next;
		delete p;
	}
}
void display(struct Node *p)
{
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	while(p!=first);
}
int main()
{
	struct Node *temp;
	int n=5;
	int A[]={3,6,1,9,4};
	create(A,n);
	deleteelement(first,3);
	display(first);
	return 0;
}
