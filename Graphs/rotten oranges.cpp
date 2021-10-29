#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    bool issafe(int i,int j,int r,int c)
    {
        if(i<0 || i>=r || j<0 || j>=c)
        {
            return false;
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int r=grid.size();
        int c=grid[0].size();
        bool change=false;
        int no=2;
        while(true)
        {
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(grid[i][j]==no)
                    {
                        if(issafe(i+1,j,r,c) && grid[i+1][j]==1)
                        {
                            change=true;
                            grid[i+1][j]=grid[i][j]+1;
                        }
                        if(issafe(i,j+1,r,c) && grid[i][j+1]==1)
                        {
                            change=true;
                            grid[i][j+1]=grid[i][j]+1;
                        }
                        if(issafe(i-1,j,r,c) && grid[i-1][j]==1)
                        {
                            change=true;
                            grid[i-1][j]=grid[i][j]+1;
                        }
                        if(issafe(i,j-1,r,c) && grid[i][j-1]==1)
                        {
                            change=true;
                            grid[i][j-1]=grid[i][j]+1;
                        }
                    }
                }
            }
            if(!change)
            {
                break;
            }
            change=false;
            no++;
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return no-2;
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
