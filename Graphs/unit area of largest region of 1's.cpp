#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void mark_grid(vector<vector<int>>&grid,int x,int y,int r,int c,int &count)
    {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]!=1)
        {
            return ;
        }
        grid[x][y]=2;
        count++;
        mark_grid(grid,x-1,y,r,c,count);
        mark_grid(grid,x,y-1,r,c,count);
        mark_grid(grid,x+1,y,r,c,count);
        mark_grid(grid,x,y+1,r,c,count);
        mark_grid(grid,x-1,y-1,r,c,count);
        mark_grid(grid,x-1,y+1,r,c,count);
        mark_grid(grid,x+1,y+1,r,c,count);
        mark_grid(grid,x+1,y-1,r,c,count);
    }
    int findMaxArea(vector<vector<int>>& grid) 
    {
        int r=grid.size();
        if(r==0)
        {
            return 0;
        }
        int c=grid[0].size();
        int maxcount=0;
        int count=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    mark_grid(grid,i,j,r,c,count);
                    maxcount=max(maxcount,count);
                    count=0;
                }
            }
        }
        return maxcount;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
