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
int maxi(struct Node *p)
{
	int m=INT_MIN;    //-32768
	while(p!=NULL)
	{
		if(p->data>m)
		{
			m=p->data;
		}
		p=p->next;
	}
	return m;
}
int main()
{
	struct Node *temp;
	int n=5;
	int A[]={3,6,1,9,4};
	create(A,n);
	cout<<maxi(first);
	return 0;
}
