void flatten(Node *root)
    {
        stack<Node *> st;
        st.push(root);
        while(!st.empty())
        {
            Node *curr=st.top();
            st.pop();
            if(curr!=NULL && curr->right!=NULL)
            {
                st.push(curr->right);
            }
            if(curr!=NULL && curr->left!=NULL)
            {
                st.push(curr->left);
            }
            if(!st.empty())
            {
                curr->right=st.top();
                curr->left=NULL;
            }
        }
    }
