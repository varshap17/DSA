class Solution{
public:
    int dp[21][201];
    int solve(vector<int> arr,int n,int k,int curr)
    {
        if(n==0)
        {
            return curr==k;
        }
        if(dp[n][curr]!=-1)
        {
            return dp[n][curr];
        }
        return dp[n][curr]=solve(arr,n-1,k,curr)+solve(arr,n-1,k,curr^arr[n-1]);
    }
    int subsetXOR(vector<int> arr, int N, int K) 
    {
        int curr=0;
        memset(dp,-1,sizeof(dp));
        return solve(arr,N,K,curr);
    }
};
