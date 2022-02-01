#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        sort(A,A+n);
        sort(B,B+m);
        int s1=0;
        int s2=0;
        for(int i=0;i<n;i++)
        {
            s1+=A[i];
        }
        for(int i=0;i<m;i++)
        {
            s2+=B[i];
        }
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(s1-A[i]+B[j]==s2-B[j]+A[i])
            {
                return 1;
            }
            else if(s1-A[i]+B[j]<s2-B[j]+A[i])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends
