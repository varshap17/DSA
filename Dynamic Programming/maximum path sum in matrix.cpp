class Solution{
public:
    int solve(int i,int j,vector<vector<int>>&mat, vector<vector<int>> &dp)
    {
        int r=mat.size();
        int c=mat[0].size();
        if(j<0 ||j>c-1)
        {
            return 0;
        }
        if(i==r-1)
        {
            return mat[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int a=mat[i][j]+solve(i+1,j-1,mat,dp);
        int b=mat[i][j]+solve(i+1,j,mat,dp);
        int ca=mat[i][j]+solve(i+1,j+1,mat,dp);
        return dp[i][j]=max({a,b,ca});
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        vector<vector<int>> dp(N+1,vector<int>(N+1,-1));
        int ans=0;
        for(int i=0;i<N;i++)
        {
            ans=max(ans,solve(0,i,Matrix,dp));
        }
        return ans;
    }
};
