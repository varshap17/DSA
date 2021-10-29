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
void delduplicate(struct Node *head)
{
	struct Node *q=head;
	struct Node *p=head->next;
	while(p)
	{
		if(p->data!=q->data)
		{
			q=p;
			p=p->next;
		}
		else
		{
			q->next=p->next;
			delete p;
			p=q->next;
		}
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
	int A[]={3,3,1,1,1};
	create(A,n);
	delduplicate(first);
	display(first);
	return 0;
}
