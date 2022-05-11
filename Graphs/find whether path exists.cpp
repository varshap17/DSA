bool dfs(int r,int c,int n,vector<vector<int>> &grid,vector<vector<int>>&vis)
    {
        if(r>=n || r<0 || c<0 || c>=n || vis[r][c]==1 || grid[r][c]==0)
        {
            return false;
        }
        if(grid[r][c]==2)
        {
            return true;
        }
        vis[r][c]=1;
        bool b1=dfs(r+1,c,n,grid,vis);
        bool b2=dfs(r-1,c,n,grid,vis);
        bool b3=dfs(r,c-1,n,grid,vis);
        bool b4=dfs(r,c+1,n,grid,vis);
        vis[r][c]=0;
        return b1||b2||b3||b4;
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0 && grid[i][j]==1)
                {
                    if(dfs(i,j,n,grid,vis))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
