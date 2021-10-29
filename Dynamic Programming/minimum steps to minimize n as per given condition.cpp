#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minSteps(int n) 
	{ 
	    int dp[n+1]={0};
	    dp[1]=0;
	    int ans1,ans2,ans3;
	    for(int i=2;i<=n;i++)
	    {
	        ans1=ans2=ans3=INT_MAX;
	        if(i%2==0)
	        {
	            ans2=dp[i/2];
	        }
	        if(i%3==0)
	        {
	            ans3=dp[i/3];
	        }
	        ans1=dp[i-1];
	        dp[i]=1+min(ans1,min(ans2,ans3));
	    }
	    return dp[n];
	} 
};


// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
