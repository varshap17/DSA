#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
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
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
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
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}
int findCousinSum(Node* root, int key);

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        int k;
        scanf("%d ",&k);
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
        cout<<findCousinSum(root,k)<<endl;
  }
  return 0;
}
// } Driver Code Ends


//User function Template for C++

int findCousinSum(Node* root, int key) 
{ 
    if(root==NULL)
    {
        return 0;
    }
    if(root->data==key)
    {
        return -1;
    }
    int currSum = 0;
    int size;
    queue<Node*> q;
    q.push(root);
    bool found = false;
    while (!q.empty()) 
    {
        if (found == true) 
        {
            return currSum;
        }
        size = q.size();
        currSum = 0;
 
        while (size) 
        {
            root = q.front();
            q.pop();
            if ((root->left && root->left->data == key)
                || (root->right && root->right->data == key)) 
            {
                found = true;
            }
            else 
            {
                if (root->left) 
                {
                    currSum += root->left->data;
                    q.push(root->left);
                }
 
                if (root->right) 
                {
                    currSum += root->right->data;
                    q.push(root->right);
                }
            }
 
            size--;
        }
    }
 
    return -1;
}
