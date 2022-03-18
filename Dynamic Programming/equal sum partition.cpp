// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++


class Solution
{
    public:
    //Function to check whether a set of numbers can be partitioned into 
    //two subsets such that the sum of elements in both subsets is same.
    bool findPartition(int a[], int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        if(sum%2!=0)
        {
            return false;
        }
        sum=sum/2;
        bool t[n+1][sum+1];
        for(int i=0;i<n+1;i++)
        {
            t[i][0]=true;
        }
        for(int j=1;j<sum+1;j++)
        {
            t[0][j]=false;
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(a[i-1]<=j)
                {
                    t[i][j]=t[i-1][j-a[i-1]]||t[i-1][j];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][sum];
    }
};

// { Driver Code Starts.
int main() {
    
    //taking total testcases
    int tc;
    cin >> tc;
    while (tc--) {
        
        //taking size of array
        int n, i;
        cin >> n;
        int a[n];
        
        //inserting elements in the array
        for (i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        //calling findPartition() function and
        //printing "YES", if it returns true
        //else "NO"
        if (ob.findPartition(a, n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
  // } Driver Code Ends
