//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
	public:
    	long long findNth(long long N)
        {
            long long t=1;
            long long sum=0;
            while(N>0)
            {
                long long rem=N%9;
                sum+=(t*rem);
                N=N/9;
                t=t*10;
            }
            return sum;
        }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}

  // } Driver Code Ends
