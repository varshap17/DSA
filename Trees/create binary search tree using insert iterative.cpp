#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
}*root=NULL;

void insert(int key)
{
	struct Node *t=root;
	struct Node *r=NULL, *p;
	if(root==NULL)
	{
		p=new Node;
		p->data=key;
		p->left=p->right=NULL;
		root=p;
		return ;
	}
	while(t!=NULL)
	{
		r=t;
		if(key<t->data)
		{
			t=t->left;
		}
		else if(key>t->data)
		{
			t=t->right;
		}
		else
		{
			return ;
		}
	}
	p=new Node;
	p->data=key;
	p->right=p->left=NULL;
	if(key<r->data)
	{
		r->left=p;
	}
	else
	{
		r->right=p;
	}
}

void inorder(Node *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int main()
{
	insert(30);
	insert(20);
	insert(10);
	insert(15);
	insert(2);
	insert(1);
	insert(50);
	
	inorder(root);
	return 0;
}
