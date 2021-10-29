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
bool issorted(struct Node *p)
{
	int x=INT_MIN;
	while(p)
	{
		if(p->data<x)
		{
			return false;
		}
		x=p->data;
		p=p->next;
	}
	return true;
}
int main()
{
	struct Node *temp;
	int n=5;
	int A[]={3,6,11,19,24};
	create(A,n);
	if(issorted(first))
	{
		cout<<"List is sorted\n";
	}
	else
	{
		cout<<"List is not sorted\n";
	}
	return 0;
}
