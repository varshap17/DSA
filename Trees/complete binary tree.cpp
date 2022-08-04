class Solution{
public:    
    bool isCompleteBT(Node* root)
    {
        queue<Node*>q;
        q.push(root);
        bool flag=0;
        while(!q.empty()){
            auto it= q.front();q.pop();
            if(!it){
                flag=1; continue;
            }
            if(flag==1)return false;
            q.push(it->left);
            q.push(it->right);
        }
        return true;
    }
};
