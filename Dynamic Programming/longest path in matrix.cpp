int traverse(vector<vector<int>>&mat, int i,int j,vector<vector<int>> &dp, int &ans)
    {
        if(dp[i][j]!=0)
        {
            return dp[i][j];
        }
        int n=mat.size();
        int m=mat[0].size();
        int a1[]={-1,1,0,0};
        int a2[]={0,0,-1,1};
        for(int k=0;k<4;k++)
        {
            int a=i+a1[k];
            int b=j+a2[k];
            if(a>=0 && a<n && b>=0 && b<m)
            {
                if(mat[a][b]>mat[i][j])
                {
                    dp[i][j]=max(dp[i][j],1+traverse(mat,a,b,dp,ans));
                }
            }
        }
        ans=max(ans,dp[i][j]);
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) 
    {
        int ans=0;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dp[i][j]==0)
                {
                    traverse(matrix,i,j,dp,ans);
                }
            }
        }
        return ans+1;
    }
