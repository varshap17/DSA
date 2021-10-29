#include<iostream>
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

void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->key << " ";
    printInorder(node->right);
}

Node* removeleaf(struct Node* root)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->left==NULL && root->right==NULL)
	{
		return NULL;
	}
	root->left=removeleaf(root->left);
	root->right=removeleaf(root->right);
	return root;
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
    printInorder(root);
    cout<<"\n";
    printInorder(removeleaf(root));
    return 0;
}
