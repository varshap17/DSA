long long int arrangeTiles(int N)
    {
        vector<long long> dp(max(4,N+1));
        for(int i=0;i<4;i++)
        {
            dp[i]=1;
        }
        for(int i=4;i<=N;i++)
        {
            dp[i]=dp[i-1]+dp[i-4];
        }
        return dp[N];
    }
