#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int r=n;
        int c=m;
        int l=0;
        int h=0;
        while(l<r && h<c)
        {
            for(int i=h;i<c;i++)
            {
                k--;
                if(k==0)
                {
                    return a[l][i];
                }
            }
            l++;
            for(int i=l;i<r;i++)
            {
                k--;
                if(k==0)
                {
                    return a[i][c-1];
                }
            }
            c--;
            if(l<r)
            {
                for(int i=c-1;i>=h;i--)
                {
                    k--;
                    if(k==0)
                    {
                        return a[r-1][i];
                    }
                }
                r--;
            }
            if(h<c)
            {
                for(int i=r-1;i>=l;i--)
                {
                    k--;
                    if(k==0)
                    {
                        return a[i][h];
                    }
                }
                h++;
            }
        }
    }

};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}  // } Driver Code Ends
