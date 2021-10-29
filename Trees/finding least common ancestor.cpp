#include<iostream>
#include<vector>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node* newNode(int key)
{
	struct Node *temp=new Node;
	temp->data=key;
	temp->left=temp->right=NULL;
	return temp;
}

struct Node* findLCA(struct Node *root, int n1, int n2)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data==n1 || root->data==n2)
	{
		return root;
	}
	Node *left_n=findLCA(root->left,n1,n2);
	Node *right_n=findLCA(root->right,n1,n2);
	 
	if(left_n && right_n)
	{
		return root;
	}
	return (left_n!=NULL)?left_n:right_n;
}

int main()
{
    // Let us create binary tree given in the above example
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->data<<"\n";
    cout << "nLCA(4, 6) = " << findLCA(root, 4, 6)->data<<"\n";
    cout << "nLCA(3, 4) = " << findLCA(root, 3, 4)->data<<"\n";
    cout << "nLCA(2, 4) = " << findLCA(root, 2, 4)->data<<"\n";

    return 0;
}
