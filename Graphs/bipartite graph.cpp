bool check(int curr,vector<int>adj[],vector<int> &col)
    {
        queue<int> q;
        q.push(curr);
        col[curr]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:adj[node])
            {
                if(col[it]==-1)
                {
                    col[it]=!col[node];
                    q.push(it);
                }
                else
                {
                    if(col[it]==col[node])
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[])
	{
	    vector<int> col(V,-1);
	    for(int i=0;i<V;i++)
	    {
	        if(col[i]==-1)
	        {
	            if(check(i,adj,col)==false)
	            {
	                return false;
	            }
	        }
	    }
	    return true;
	}
