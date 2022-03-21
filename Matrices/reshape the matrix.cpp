class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        vector<vector<int>> ans;
        int n=mat.size();
        int m=mat[0].size();
        if(n*m!=r*c)
        {
            return mat;
        }
        vector<int> temp;
        int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                temp.push_back(mat[i][j]);
                k++;
                if(k==c)
                {
                    ans.push_back(temp);
                    temp.clear();
                    k=0;
                }
            }
        }
        return ans;
    }
};
