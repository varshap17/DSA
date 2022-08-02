Node* deleteNode(Node* root, int k)
    {
        if(!root) 
            return root;
        
        if(root->data >= k)
        {
            return deleteNode(root->left, k);
        }
        else if (root->data < k)
        {
            root->right = deleteNode(root->right, k);            
            return root;
        }
    }
