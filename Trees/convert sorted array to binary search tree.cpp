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

void inorder(Node *root)
{
	if(root==NULL)
	{
		return ;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

Node* array(int arr[],int start,int end)
{
	if(start>end)
	{
		return NULL;
	}
	int mid=(start+end)/2;
	Node *root=new Node(arr[mid]);
	root->left=array(arr,start,mid-1);
	root->right=array(arr,mid+1,end);
	return root;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    struct Node* p;
    p=array(arr,0,8);
    inorder(p);
    return 0;
}
