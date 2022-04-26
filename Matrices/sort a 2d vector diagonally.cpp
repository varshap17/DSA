#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    void diagonalSort(vector<vector<int> >& matrix, int n, int m) 
    {
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int c=i-j;
                mp[c].push_back(matrix[i][j]);
            }
        }
        for(auto &x:mp)
        {
            if(x.first<0)
            {
                sort(x.second.begin(),x.second.end());
            }
            else if(x.first>0)
            {
                sort(x.second.rbegin(),x.second.rend());
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i!=j)
                {
                    matrix[i][j]=mp[i-j].back();
                    mp[i-j].pop_back();
                }
            }
        }
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        int inputline2[n*m];
        for (int i = 0; i < n*m; ++i)
            cin>> inputline2[i];
        vector<vector<int> > matrix( n , vector<int> (m, 0));

        for(int i=0; i<n; i++) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = inputline2[i * m + j]; 
            }
        }
        
        Solution ob;
        ob.diagonalSort(matrix, n, m);

        // print the modified matrix
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                cout << matrix[i][j] << " "; 
            } 
            cout << endl; 
        }    
    }
    return 0;
}

  // } Driver Code Ends
