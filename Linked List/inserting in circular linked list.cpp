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
void insert(Node *p,int x,int pos)
{
	Node* t;
	t=new Node;
	t->data=x;
	if(pos==0)
	{
		if(first==NULL)
		{
			first=t;
			first->next=first;
		}
		else
		{
			while(p->next!=first)
			{
				p=p->next;
			}
			t->next=p->next;
			p->next=t;
			first=t;
		}
	}
	else
	{
		for(int i=0;i<pos-1;i++)
		{
			p=p->next;
		}
		t->next=p->next;
		p->next=t;
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
	insert(first,5,0);
	display(first);
	return 0;
}
