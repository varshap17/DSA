#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void mark_grid(vector<vector<char>> &grid,int x,int y,int r,int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]!='1')
        {
            return ;
        }
        grid[x][y]='2';
        mark_grid(grid,x-1,y,r,c);
        mark_grid(grid,x+1,y,r,c);
        mark_grid(grid,x,y-1,r,c);
        mark_grid(grid,x,y+1,r,c);
        mark_grid(grid,x-1,y-1,r,c);
        mark_grid(grid,x+1,y+1,r,c);
        mark_grid(grid,x+1,y-1,r,c);
        mark_grid(grid,x-1,y+1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int r=grid.size();
        if(r==0)
        {
            return 0;
        }
        int c=grid[0].size();
        int nofislands=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    mark_grid(grid,i,j,r,c);
                    nofislands+=1;
                }
            }
        }
        return nofislands;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends
