int isValid(vector<vector<int>> mat)
    {
        for(int i=00;i<9;i++)
        {
            vector<int> arr(10,-1);
            for(int j=0;j<9;j++)
            {
                if(mat[i][j]==0)
                {
                    continue;
                }
                else if(arr[mat[i][j]]==-1)
                {
                    arr[mat[i][j]]=mat[i][j];
                }
                else
                {
                    return 0;
                }
            }
        }
        for(int j=0;j<9;j++)
        {
            vector<int> arr(10,-1);
            for(int i=0;i<9;i++)
            {
                if(mat[i][j]==0)
                {
                    continue;
                }
                else if(arr[mat[i][j]]==-1)
                {
                    arr[mat[i][j]]=mat[i][j];
                }
                else
                {
                    return 0;
                }
            }
        }
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                vector<int> arr(10,-1);
                for(int a=0;a<3;a++)
                {
                    for(int b=0;b<3;b++)
                    {
                        if(mat[i+a][j+b]==0)
                        {
                            continue;
                        }
                        else if(arr[mat[i+a][j+b]]==-1)
                        {
                            arr[mat[i+a][j+b]]=mat[i+a][j+b];
                        }
                        else
                        {
                            return 0;
                        }
                    }
                }
            }
        }
        return 1;
    }
