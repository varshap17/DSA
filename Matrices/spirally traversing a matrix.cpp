#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> v;
        int l=0,h=0;
        int n=r,m=c;
        while(l<n && h<m)
        {
            for(int i=h;i<m;i++)
            {
                v.push_back(matrix[l][i]);
            }
            l++;
            for(int i=l;i<n;i++)
            {
                v.push_back(matrix[i][m-1]);
            }
            m--;
            if(l<n)
            {
                for(int i=m-1;i>=h;--i)
                {
                    v.push_back(matrix[n-1][i]);
                }
                n--;
            }
            if(h<m)
            {
                for(int i=n-1;i>=l;--i)
                {
                    v.push_back(matrix[i][h]);
                }
                h++;
            }
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
