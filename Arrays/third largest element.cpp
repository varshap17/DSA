#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        if(n<3)
        {
            return -1;
        }
        int m1=INT_MIN;
        int m2=INT_MIN;
        int m3=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i]>m1)
            {
                m3=m2;
                m2=m1;
                m1=a[i];
            }
            else if(a[i]>m2)
            {
                m3=m2;
                m2=a[i];
            }
            else if(a[i]>m3)
            {
                m3=a[i];
            }
        }
        return m3;
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
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends
