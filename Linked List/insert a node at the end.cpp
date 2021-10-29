#include<bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	struct Node* next;
};
void append(struct Node **head_ref,int new_data)
{
	Node* new_node=new Node;
	struct Node* last=*head_ref;
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return ;
	}
	while(last>next!=NULL)
	{
		last=last->next;
	}
	last->next=new_node;
	return ;
}
void display(struct Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main()
{
	struct Node* head;
	struct Node* second;
	struct Node* third;
	
	head=new Node;
	second=new Node;
	third=new Node;
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	append(*third,5);
	display(head);
	return 0;
}
