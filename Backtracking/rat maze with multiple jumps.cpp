bool inBoard(int x, int y, int n)
    {
       if(x<0 || y<0 || x>=n || y>=n)
       {
           return 0;
       }
       return 1;
    }

    bool generate(vector<vector<int>> &matrix, int x, int y, vector<vector<int>> &path)
    {
       int n = matrix.size();
       if((x==n-1) && (y==n-1)) return true;
       
       if(!inBoard(x, y, n)) return false;
       
       for(int i = 1;i<=matrix[x][y];i++)
       {
           if(inBoard(x, y+i, n)) path[x][y+i]=1;
           if(generate(matrix, x, y+i, path) == true)
           {
               return true;
           }
           if(inBoard(x, y+i, n)) path[x][y+i]=0;
           if(inBoard(x+i, y, n)) path[x+i][y]=1;
           if(generate(matrix, x+i, y, path) == true)
           {
               return true;
           }
           if(inBoard(x+i, y, n)) path[x+i][y]=0;
       }
       return false;
    }
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix)
	{
	   vector<vector<int>> path;
        int n = matrix.size();
       for(int i = 0;i<n;i++)
       {
           vector<int> tmp;
           for(int j = 0;j<n;j++)
           {
               tmp.push_back(0);
           }
           path.push_back(tmp);
       }
       
       generate(matrix, 0, 0, path);
       path[0][0]=1;
       if(path[n-1][n-1]==0)
       {
           vector<vector<int>> tmp;
           vector<int> K = {-1};
           tmp.push_back(K);
           return tmp;
       }
       return path;
	}
