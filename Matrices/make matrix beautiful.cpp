#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        vector<int> sum;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int rsum=0;
            int csum=0;
            for(int j=0;j<n;j++)
            {
                rsum+=matrix[i][j];
                csum+=matrix[j][i];
            }
            sum.push_back(rsum);
            maxi=max(maxi,max(rsum,csum));
        }
        int c=0;
        for(int i=0;i<sum.size();i++)
        {
            c+=(maxi-sum[i]);
        }
        return c;
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}

  // } Driver Code Ends
