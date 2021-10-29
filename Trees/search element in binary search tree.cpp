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

bool search(Node *root, int key)
{
	if(root==NULL)
	{
		return false;
	}
	if(root->data==key)
	{
		return true;
	}
	if(root->data<key)
	{
		search(root->right,key);
	}
	else
	{
		search(root->left,key);
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
    if(search(root,3)==true)
    {
    	cout<<"Element is found";
	}
	else
	{
		cout<<"Element is not found";
	}
    return 0;
}
