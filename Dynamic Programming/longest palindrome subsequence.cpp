//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    string reverse(string A)
    {
        int i=0;
        int j=A.length()-1;
        while(i<j)
        {
            char temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i++;
            j--;
        }
        return A;
    }
    int longestPalinSubseq(string a) 
    {
        string b=reverse(a);
        int n=a.length();
        int m=b.length();
        int t[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(a[i-1]==b[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][m];
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
