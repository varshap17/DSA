#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int MinCoin(vector<int>nums, int amount)
	{
	    int n=nums.size();
	    int t[n+1][amount+1];
	    for(int i=1;i<n+1;i++)
	    {
	        t[i][0]=0;
	    }
	    for(int j=0;j<amount+1;j++)
	    {
	        t[0][j]=INT_MAX-1;
	    }
	    for(int j=1;j<amount+1;j++)
	    {
	        if(j%nums[0]==0)
	        {
	            t[1][j]=j/nums[0];
	        }
	        else
	        {
	            t[1][j]=INT_MAX-1;
	        }
	    }
	    for(int i=2;i<n+1;i++)
	    {
	        for(int j=1;j<amount+1;j++)
	        {
	            if(nums[i-1]<=j)
	            {
	                t[i][j]=min(t[i-1][j],1+t[i][j-nums[i-1]]);
	            }
	            else 
	            {
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    if(t[n][amount]==INT_MAX-1)
	    {
	        return -1;
	    }
	    return t[n][amount];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
