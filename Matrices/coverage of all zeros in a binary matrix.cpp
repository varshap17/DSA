

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    int FindCoverage(vector<vector<int>>&matrix)
    {
        int count=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    if(i-1>=0)
                    {
                        if(matrix[i-1][j]==1)
                        {
                            count++;
                        }
                    }
                    if(j-1>=0)
                    {
                        if(matrix[i][j-1]==1)
                        {
                            count++;
                        }
                    }
                    if(i+1<n)
                    {
                        if(matrix[i+1][j]==1)
                        {
                            count++;
                        }
                    }
                    if(j+1<m)
                    {
                        if(matrix[i][j+1]==1)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};


