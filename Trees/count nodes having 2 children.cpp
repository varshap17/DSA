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

int count(Node *root)
{
	int x,y;
	if(root!=NULL)
	{
		x=count(root->left);
		y=count(root->right);
		if(root->left && root->right)
		{
			return x+y+1;
		}
		else
		{
			return x+y;
		}
	}
	return 0;
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

    cout<<"Number of nodes = "<<count(root)<<"\n";
    return 0;
}
