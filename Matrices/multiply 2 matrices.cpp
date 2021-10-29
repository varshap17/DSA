#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        vector<vector<int>> m;
        int g;
        int r1,r2,c1,c2;
        r1=A.size();
        r2=B.size();
        c1=A[0].size();
        c2=B[0].size();
        if(c1!=r2)
        {
            return m;
        }
        for(int i=0;i<r1;i++)
        {
                vector<int> row;
                for(int j=0;j<c2;j++)
                {
                    g=0;
                    for(int k=0;k<c1;k++)
                    {
                        g+=(A[i][k]*B[k][j]);
                    }
                    row.push_back(g);
                }
                m.push_back(row);
                row.clear();
            }
        return m;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > A(row); 
        for(int i=0; i<row; i++)
        {
            A[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>A[i][j];
            }
        }
        cin>> row>> col;
        vector<vector<int> > B(row);
        for(int i=0; i<row; i++)
        {
            B[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>B[i][j];
            }
        }
        Solution ob;
        vector<vector<int> > result = ob.multiplyMatrix(A,B);

        if(result.size() == 0)
            cout<<"-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout<<result[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
