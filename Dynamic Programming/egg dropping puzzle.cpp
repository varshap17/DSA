#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    int t[201][201];
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int solve(int n,int k)
    {
        if(k==0 || k==1)
        {
            return k;
        }
        if(n==1)
        {
            return k;
        }
        if(t[n][k]!=-1)
        {
            return t[n][k];
        }
        int mn=INT_MAX;
        for(int a=1;a<=k;a++)
        {
            int low=t[n-1][a-1]!=-1?t[n-1][a-1]:solve(n-1,a-1);
            int high=t[n][k-a]!=-1?t[n][k-a]:solve(n,k-a);
            int temp=1+max(low,high);
            mn=min(mn,temp);
        }
        return t[n][k]=mn;
    }
    int eggDrop(int n, int k) 
    {
        memset(t,-1,sizeof(t));
        return solve(n,k);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
