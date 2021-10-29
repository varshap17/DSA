#include<iostream>
#include<cmath>
#include<queue>
using namespace std;

struct Node { 
    int key; 
    struct Node* left, *right; 
}; 

// Utility function to create a new Node
struct Node* newNode(int key) 
{ 
    struct Node* temp = new Node; 
    temp->key = key; 
    temp->left = temp->right = NULL; 
    return temp; 
}; 

int height(Node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	return 1+max(height(root->left),height(root->right));
}

bool isBalanced(struct Node *root)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(abs(height(root->left)-height(root->right))<=1)
	{
		return true;
	}
	bool l=isBalanced(root->left);
	bool r=isBalanced(root->right);
	return l&&r;
}
int main()
{
    // Contrust the Tree
    //      1
    //     /  \
    //    2    3
    //   / \    
    //  4   5
    
    struct Node *root = newNode(1);
    root->left    = newNode(2);
    root->right    = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5); 
    if(isBalanced(root)==true)
    {
    	cout<<"Tree is Balanced";
	}
	else
	{
		cout<<"Tree is not Balanced";
	}
    return 0;
}
