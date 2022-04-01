#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        int t[n];
        for(int i=0;i<n;i++)
        {
            t[i]=1;
        }
        int i=1;
        int j=0;
        int maxi=1;
        while(i<n)
        {
            if(a[j]<a[i] && j<i)
            {
                t[i]=max(t[i],t[j]+1);
                j++;
                maxi=max(maxi,t[i]);
            }
            else if(a[j]>=a[i] && j<i)
            {
                j++;
            }
            else
            {
                j=0;
                i++;
            }
        }
        return maxi;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends
