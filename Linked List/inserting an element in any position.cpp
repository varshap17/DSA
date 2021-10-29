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
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void insert(int pos,int x)
{
	struct Node *t,*p;
	if(pos==0)
	{
		t=new Node;
		t->data=x;
		t->next=first;
		first=t;
	}
	else if(pos>0)
	{
		p=first;
		for(int i=0;i<pos && p;i++)
		{
			p=p->next;
		}
		t=new Node;
		t->data=x;
		t->next=p->next;
		p->next=t;
	}
}
void display(struct Node *p)
{
	if(p)
	{
		cout<<p->data<<" ";
		display(p->next);
	}
}
int main()
{
	struct Node *temp;
	int n=5;
	int A[]={3,6,1,9,4};
	create(A,n);
	insert(3,20);
	display(first);
	return 0;
}
