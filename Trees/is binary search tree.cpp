#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int leftmax(Node *root)
{
	if(root==NULL)
	{
		return INT_MIN;
	}
	int left=leftmax(root->left);
	int right=leftmax(root->right);
	return max(max(right,left),root->data);
}

int rightmin(Node *root)
{
	if(root==NULL)
	{
		return INT_MAX;
	}
	int left=rightmin(root->left);
	int right=rightmin(root->right);
	return min(min(right,left),root->data);
}

bool isBST(Node *root)
{
	if(root==NULL)
	{
		return true;
	}
	int lmax=leftmax(root->left);
	int rmin=rightmin(root->right);
	if(lmax>root->data)
	{
		return false;
	}
	if(rmin<root->data)
	{
		return false;
	}
	bool l=isBST(root->left);
	bool r=isBST(root->right);
	return l&&r;
}

int main()
{
    // Contrust the Tree
    //      4
    //     /  \
    //    3    5
    //   / \    
    //  1   2
    
    struct Node *root = new Node(4);
    root->left    = new Node(3);
    root->right    = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(2); 
    if(isBST(root))
    {
    	cout<<"This is a binary search tree";
	}
	else
	{
		cout<<"This is not a binary search tree";
	}
    return 0;
}
