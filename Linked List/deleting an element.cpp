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
int deleteelement(struct Node *p, int pos)
{
	struct Node *q=NULL;
	int x=-1;
	if(pos==1)
	{
		x=first->data;
		p=first;
		first=first->next;
		delete p;
	}
	else
	{
		p=first;
		for(int i=0;i<pos-1 && p;i++)
		{
			q=p;
			p=p->next;
		}
		if(p)
		{
			q->next=p->next;
			x=p->data;
			delete p;
		}
	}
	return x;
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
	cout<<"Deleted Element = "<<deleteelement(first,4)<<"\n";
	display(first);
	return 0;
}
