//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
      
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
          
        // Get the current node's value from the string
        string currVal = ip[i];
          
        // If the left child is not null
        if(currVal != "N") {
            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }
          
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
          
        // If the right child is not null
        if(currVal != "N") {
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function template for C++
/*
Structure of the node of the tree is as follows 
struct Node {
    struct Node* left, *right;
    int data;
};
*/

class Solution{
  public:
    // function should return the number of turns required to go from first node to second node 
    Node* findlca(Node *root,int n1,int n2)
    {
        if(root==NULL)
        {
            return NULL;
        }
        if(root->data==n1 || root->data==n2)
        {
            return root;
        }
        Node* llca=findlca(root->left,n1,n2);
        Node* rlca=findlca(root->right,n1,n2);
        if(llca && rlca)
        {
            return root;
        }
        return (llca?llca:rlca);
    }
    void findbends(Node* root,int target,bool b,int &ans,int bend)
{
    if(!root)
    return;
    
    if(root->data==target)
    ans=bend;
    
    findbends(root->left,target,0,ans,(b)?bend+1:bend);
    
    findbends(root->right,target,1,ans,(b)?bend:bend+1);
}
int NumberOFTurns(struct Node* root, int first, int second)
{
    Node* lca=findlca(root,first,second);
    
    int bend1=0,bend2=0;
    
    findbends(lca->left,first,0,bend1,0);
    findbends(lca->right,first,1,bend1,0);
    
    findbends(lca->left,second,0,bend2,0);
    findbends(lca->right,second,1,bend2,0);
    
    if(lca->data!=first&&lca->data!=second)
    return bend1+bend2+1;
    
    if(bend1+bend2)
    return bend1+bend2;
    return -1;
}
    
};

// { Driver Code Starts.

int main()
{
    int t;
    struct Node *child;
    scanf("%d ", &t);
    while (t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        int turn, first, second;
        cin>>first>>second;
        Solution ob;
        if ((turn = ob.NumberOFTurns(root, first, second) ))
            cout<<turn<<endl;
        else 
            cout<<"-1\n";
        cin.ignore();
    }
    return 0;
}
  // } Driver Code Ends
