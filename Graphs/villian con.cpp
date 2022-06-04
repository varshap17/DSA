int minColour(int N, int M, vector<int> mat[]) 
    {
        vector<vector<int>>adj(N+1);
        vector<int>indegree(N+1);
        
        for(int i=0;i<M;i++){
            adj[mat[i] [00]].push_back(mat[i][1]);
            indegree[mat[i][1]]++;
            
        }
        int level = 0;
        queue<int>q;
        for(int i=1;i<=N;i++){
            if(indegree[i]==0)
            q.push(i);
            
        }
        if(q.empty())
        return 0;
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                int f = q.front();
                q.pop();
                for(auto it : adj[f]){
                    indegree[it]--;
                    if(indegree[it] == 0)
                    q.push(it);
                    
                }
                
            }
           level++; 
        }
        return level;
    }
