class Solution {
  public:
    void dfs(int src, vector<int>&vis, vector<vector<int>>v)
    {
        vis[src] = 1;
        for (auto x: v[src])
        {
            if (vis[x]==0)
            {
                dfs(x,vis,v);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) 
    {
        vector<int>vis(V,0);
        vector<vector<int>>v(V);
        for (int i = 0; i<adj.size(); i++)
        {
            for (int j = 0; j<adj[0].size(); j++)
            {
                if (adj[i][j]==1)
                {
                    v[i].push_back(j);
                    v[j].push_back(i);
                }
            }
        }
        
        int ct = 0;
        for (int i = 0; i<v.size(); i++)
        {
            if (!vis[i])
            {
                dfs(i,vis,v);
                ct++;
            }
        }
        return ct;
    }
};
