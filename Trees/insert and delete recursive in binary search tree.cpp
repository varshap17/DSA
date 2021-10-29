#include <iostream>
using namespace std;

struct Node 
{
	int data;
	struct Node *left;
	struct Node *right;
}*root=NULL;

struct Node* insert(Node* p,int key)
{
	struct Node* t=NULL;
	if(p==NULL)
	{
		t=new Node;
		t->data=key;
		t->left=t->right=NULL;
		return t;
	}
	if(key<p->data)
	{
		p->left=insert(p->left,key);
	}
	else if(key>p->data)
	{
		p->right=insert(p->right,key);
	}
	return p;
}

int height(struct Node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	return 1+max(height(root->left),height(root->right));
}

Node* inPre(struct Node* p)
{
	while(p && p->right!=NULL)
	{
		p=p->right;
	}
	return p;
}

Node* inSuc(struct Node *p)
{
	while(p && p->left!=NULL)
	{
		p=p->left;
	}
	return p;
}

Node* rdelete(struct Node* p,int key)
{
	if(p==NULL)
	{
		return NULL;
	}
	if(p->left==NULL && p->right==NULL)
	{
		if(p==root)
		{
			root=NULL;
		}
		delete(p);
		return NULL;
	}
	if(key<p->data)
	{
		p->left=rdelete(p->left,key);
	}
	else if(key>p->data)
	{
		p->right=rdelete(p->right,key);
	}
	else
	{
		if(height(p->left)>height(p->right))
		{
			Node *q=inPre(p->left);
			p->data=q->data;
			p->left=rdelete(p->left,q->data);
		}
		else
		{
			Node *q=inSuc(p->right);
			p->data=q->data;
			p->right=rdelete(p->right,q->data);
	    }
	}
	return p;
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
	root=insert(root,50);
	insert(root,40);
	insert(root,45);
	insert(root,30);
	insert(root,25);
	insert(root,20);
	insert(root,35);
	insert(root,15);
	
	inorder(root);
	cout<<"\n";
	rdelete(root,30);
	inorder(root);
	return 0;
}
