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

int fullnodes(Node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int res=0;
	if(root->left && root->right)
	{
		res++;
	}
	res+=fullnodes(root->left)+fullnodes(root->right);
	return res;
}

int main()
{
    // Contrust the Tree
    //      1
    //     /  \
    //    2    3
    //   / \    
    //  4   5
    
    struct Node *root = new Node(1);
    root->left    = new Node(2);
    root->right    = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5); 

    cout<<"Number of full nodes = "<<fullnodes(root);
    return 0;
}
