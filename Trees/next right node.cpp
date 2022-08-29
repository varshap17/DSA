queue<Node*>q;
       q.push(root);
       Node *ans=NULL;
       while(!q.empty())
       {
           int n=q.size();
           for(int i=0;i<n;i++)
           {
           Node *temp=q.front();
           q.pop();
           if(i!=n-1 && temp->data==key)
           {
               ans=q.front();
           }
           if(temp->left)
           q.push(temp->left);
            if(temp->right)
           q.push(temp->right);
           }
       }
       if(ans==NULL)
       {
           ans=new Node(-1);
           return ans;
       }
       return ans;
