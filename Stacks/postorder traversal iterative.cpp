vector<int> postOrder(Node* node) 
    {
        vector<int> ans;
        stack<Node*> st;
        if(node==NULL)
        {
            return ans;
        }
        st.push(node);
        while(!st.empty())
        {
            Node *t=st.top();
            st.pop();
            ans.push_back(t->data);
            if(t->left)
            {
                st.push(t->left);
            }
            if(t->right)
            {
                st.push(t->right);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
