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
void display(struct Node *p)
{
	int flag=0;
	while(p!=first || flag==0)
	{
		flag=1;
		cout<<p->data<<" ";
		display(p->next);
	}
	flag=0;
}
int main()
{
	struct Node *temp;
	int n=5;
	int A[]={3,6,1,9,4};
	create(A,n);
	display(first);
	return 0;
}
