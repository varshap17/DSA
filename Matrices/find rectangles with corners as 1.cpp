class Solution{
    public:
    bool ValidCorner(const vector<vector<int> >& matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        set<pair<int,int>> s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(matrix[i][j]==0)
                {
                    continue;
                }
                for(int k=j+1;k<m;k++)
                {
                    if(matrix[i][k]==0)
                    {
                        continue;
                    }
                    if(s.count({j,k}))
                    {
                        return true;
                    }
                    s.insert({j,k});
                }
            }
        }
        return false;
    }
};
