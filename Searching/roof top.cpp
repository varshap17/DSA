#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
       int maxi=0;
       int m=0;
       for(int i=1;i<N;i++)
       {
           if(A[i]-A[i-1]>0)
           {
               m++;
           }
           else
           {
               maxi=max(maxi,m);
               m=0;
           }
       }
       maxi=max(maxi,m);
       return maxi;
    }
};

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}  // } Driver Code Ends
