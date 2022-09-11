class Solution{
    public:
    int r,c;
    int findit(vector<vector<char> > &mat, string target, int i, int j, int idx)
    {
        int found = 0;
        if(i >= 0 and j >= 0 and i<r and j <c and target[idx] == mat[i][j])
        {
            mat[i][j] = '#';
            if(idx == target.size()-1)
            {
                found = 1;
            }

            found += findit(mat, target, i+1, j, idx+1);
            found += findit(mat, target, i-1, j, idx+1);
            found += findit(mat, target, i, j-1, idx+1);
            found += findit(mat, target, i, j+1, idx+1);
            
            mat[i][j] = target[idx];
        }
        return found;
    }
    int findOccurrence(vector<vector<char> > &mat, string target)
    {
        r = mat.size();
        c = mat[0].size();
        int no_of_occurrence = 0;
        for(int i = 0; i<r; i++)
        {
            for(int j = 0; j<c; j++)
            {
                no_of_occurrence += findit(mat, target, i, j, 0);
            }
        }
        return no_of_occurrence;
    }
};
