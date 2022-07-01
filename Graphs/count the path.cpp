void countPath(vector<vector<int>> adj, int src, int dest, int &count, vector<int> &visited)
    {
        if(src==dest){
        count++;
        return;
        }
        
        visited[src]=1;
        for(int i: adj[src])
        {
            if(!visited[i])
            countPath(adj,i,dest,count,visited);
        }
        visited[src]=0;
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d)
	{
	     vector<vector<int>> adj(n,vector<int>());
	    for(auto it:edges)
	    adj[it[0]].push_back(it[1]);
	    vector<int> visited(n,0);
	     int count=0;
	    countPath(adj,s,d,count,visited);
	    return count;

	}
