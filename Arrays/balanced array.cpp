#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int arr[], int n)
    {
        int lsum=0;
        int rsum=0;  
        for(int i=0;i<n;i++)
        {
            if(i==(n/2))
            {
                break;
            }
            lsum+=arr[i];
            rsum+=arr[n-i-1];
        }
        return abs(lsum-rsum);
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
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
