#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    if(k==1)
	    {
	        return n;
	    }
	    map<int,int> m;
	    map<int,int> in;
	    int ma=0;
	    m[0]=1;
	    in[0]=-1;
	    int sum=0;
	    int r=0;
	    int index=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        r=sum%k;
	        if(r<0)
	        {
	            r+=k;
	        }
	        if(m.find(r)!=m.end())
	        {
	            ma=max(ma,i-in[r]);
	        }
	        else
	        {
	            m[r]++;
	            in[r]=i;
	        }
	    }
	    return ma;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends
