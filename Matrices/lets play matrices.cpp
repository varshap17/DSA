//Initial Template for C++
/*Let's play a game!! Given a matrix mat[][] with n x m elements. 
Your task is to check that matrix is Super Similar or not. 
To perform this task you have to follow these 
Rules: 
Firstly all even index rows to be Rotated left and odd index rows to right, 
And Rotation is done X times(Index starting from zero). 
Secondly, After all the Rotations check if the initial and the final Matrix are same Return 1 else 0.
#include <bits/stdc++.h>
using namespace std;*/

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isSuperSimilar(int n, int m, vector<vector<int>>& mat, int x)
    {
        vector<vector<int>> matrix=mat;
        for(int i=0;i<n;i++)
        {
            int a=0;
            if(i%2==0)
            {
                while(a<x){
                int temp=mat[i][0];
                for(int j=0;j<m-1;j++)
                {
                    mat[i][j]=mat[i][j+1];
                }
                mat[i][m-1]=temp;
                a++;
                }
            }
            else
            {
                while(a<x)
                {
                int temp=mat[i][m-1];
                for(int j=m-1;j>0;j--)
                {
                    mat[i][j]=mat[i][j-1];
                }
                mat[i][0]=temp;
                a++;
                }
            }
        }
        if(matrix==mat)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        int x;
        cin >> x;
        
        Solution ob;
        cout<<ob.isSuperSimilar(n,m,mat,x)<<endl;
    }
    return 0;
}  // } Driver Code Ends
