int dfs(vector<vector<int>> &mat,int i,int j,int n,int m,vector<vector<int>>&dp)
{
    if(j<0 || j>=m || i==n || mat[i][j]==-1)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int ld=dfs(mat,i+1,j-1,n,m,dp);
    int down=dfs(mat,i+1,j,n,m,dp);
    int rd=dfs(mat,i+1,j+1,n,m,dp);
    return dp[i][j]=mat[i][j]+max({ld,rd,down});
}
int MaxGold(vector<vector<int>>&matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    int ans=INT_MIN;
    for(int i=0;i<m;i++)
    {
        ans=max(ans,dfs(matrix,0,i,n,m,dp));
    }
    return ans;
}
