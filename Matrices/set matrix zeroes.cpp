class Solution 
{
    int n,m;
public:
    void makecol(vector<vector<int>>&matrix, int col)
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][col]=0;
        }
    }
    void makerow(vector<vector<int>>&matrix, int row)
    {
        for(int i=0;i<m;i++)
        {
            matrix[row][i]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) 
    {
        n=matrix.size();
        m=matrix[0].size();
        map<pair<int,int>,int> m1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    m1[{i,j}]++;
                }
            }
        }
        map<int,int> col;
        map<int,int> row;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0 && col.find(j)==col.end() && m1.find({i,j})!=m1.end())
                {
                    makecol(matrix,j);
                    col[j]++;
                }
                if(matrix[i][j]==0  && row.find(i)==row.end() && m1.find({i,j})!=m1.end())
                {
                    makerow(matrix,i);
                    row[i]++;
                }
            }
        }
    }
};
