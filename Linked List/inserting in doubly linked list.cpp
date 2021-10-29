#include<iostream>
using namespace std;

struct Node 
{
	struct Node *pre;
	int data;
	struct Node *next;
}*first;

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=new Node;
	first->data=A[0];
	first->pre=first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=A[i];
		t->next=last->next;
		t->pre=last;
		last->next=t;
		last=t;
	}
}
void insert(Node *p,int index,int x)
{
	Node *t;
	if(index==0)
	{
		t=new Node;
		t->data=x;
		t->pre=NULL;
		t->next=first;
		first->pre=t;
		first=t;
	}
	else
	{
		t=new Node;
		t->data=x;
		t->next=p->next;
		t->pre=p;
		if(p->next)
		{
			p->next->pre=t;
		}
		p->next=t;
	}
}
void display(struct Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main()
{
	struct Node *temp;
	int n=5;
	int A[]={3,6,1,9,4};
	create(A,n);
	insert(first,1,2);
	display(first);
	return 0;
}
