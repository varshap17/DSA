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
void reverse(struct Node *p)
{
	struct Node *temp;
	while(p)
	{
		temp=p->next;
		p->next=p->pre;
		p->pre=temp;
		p=p->pre;
		if(p && p->next==NULL)
		{
			first=p;
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
	int A[]={3,6,1,9,4};
	create(A,n);
	reverse(first);
	display(first);
	return 0;
}
