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
Node* search(struct Node *p,int key)
{
	struct Node *q=NULL;
	while(p)
	{
		if(p->data==key)
		{
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		else
		{
			q=p;
			p=p->next;
		}
	}
	return NULL;
}
int main()
{
	struct Node *temp;
	int n=5;
	int A[]={3,6,1,9,4};
	create(A,n);
	cout<<search(first,9);
	return 0;
}
