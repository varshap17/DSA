class Solution{
public:
    long long int optimalKeys(int N)
    {
        if(N<7)
        {
            return N;
        }
        vector<int>dp(N+1,0);
        for(int i=1;i<7;i++)
        {
            dp[i]=i;
        }
        for(int i=7;i<=N;i++)
        {
            for(int j=i-3;j>=1;j--)
            {
                int curr=dp[j]*(i-j-1);
                dp[i]=max(curr,dp[i]);
            }
        }
        return dp[N];

    }
};
