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

void leftview(Node *root)
{
	if(root==NULL)
	{
		return ;
	}
	queue <struct Node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty())
	{
		struct Node *temp=q.front();
		if(temp)
		{
			cout<<temp->key<<" ";
			while(q.front()!=NULL)
			{
				if(temp->left)
				{
					q.push(temp->left);
				}
				if(temp->right)
				{
					q.push(temp->right);
				}
				q.pop();
				temp=q.front();
			}
			q.push(NULL);
		}
		q.pop();
	}
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
    leftview(root);
    return 0;
}
