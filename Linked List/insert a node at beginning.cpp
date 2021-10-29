#include<bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	struct Node* next;
};
void push(struct Node *head_ref,int new_data)
{
	struct Node* new_node=new Node;
	new_node->data=new_data;
	new_node->next=(head_ref);
	(head_ref)=new_node;
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
	
	push(head,5);
	display(head);
	return 0;
}
