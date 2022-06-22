public:
	int mod=1e9+7;
	int TotalWays(int N)
	{
	    long long int dp[1000001];
	    dp[1]=2;
	    dp[2]=3;
	    for(int i=3;i<=N;i++)
	    {
	        dp[i]=((dp[i-1]%mod)+(dp[i-2]%mod))%mod;
	    }
	    return ((dp[N]%mod)*(dp[N]%mod))%mod;
	}
