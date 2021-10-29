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

void printinrange(Node *root,int k1,int k2)
{
	if(root==NULL)
	{
		return ;
	}
	if(root->data<k1 && root->data<k2)
	{
		printinrange(root->right,k1,k2);
	}
	else if(root->data>k1 && root->data>k2)
	{
		printinrange(root->left,k1,k2);
	}
	else
	{
		cout<<root->data<<" ";
	    printinrange(root->left,k1,k2);
	    printinrange(root->right,k1,k2);
	}
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
    printinrange(root,1,4);
    return 0;
}
