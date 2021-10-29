//Initial template for C++

#include<iostream>
using namespace std;
int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    long long area=0;
    int l=0;
    int r=len-1;
    while(l<r)
    {
        long long m=(min(A[l],A[r]))*(r-l);
        area=max(area,m);
        if(A[l]<A[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return area;
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
  // } Driver Code Ends
