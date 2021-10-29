#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> arr;
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<m;j++)
                {
                    arr.push_back(matrix[i][j]);
                }
            }
            else
            {
                for(int j=m-1;j>=0;j--)
                {
                    arr.push_back(matrix[i][j]);
                }
            }
        }
        return arr;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
