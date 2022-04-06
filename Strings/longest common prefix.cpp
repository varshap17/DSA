#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        string ans;
        sort(ar,ar+n);
        for(int i=0;i<ar[0].size();i++)
        {
            if(ar[0][i]==ar[n-1][i])
            {
                ans+=ar[0][i];
            }
            else
            {
                break;
            }
        }
        if(ans.size()>0)
        {
            return ans;
        }
        return "-1";
    }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends
