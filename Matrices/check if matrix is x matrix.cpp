class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    if(grid[i][j]==0)
                    {
                        return false;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                if((n-i-1)==j)
                {
                    if(grid[i][j]==0)
                    {
                        return false;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && i!=n-j-1 && j!=n-i-1)
                {
                    if(grid[i][j]!=0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
