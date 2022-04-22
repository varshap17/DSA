#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int sum=0;
            int row=0;
            for(int i=0;i<N;i++)
            {
                int s=0;
                for(int j=0;j<M;j++)
                {
                    s+=Mat[i][j];
                }
                if(s>sum)
                {
                    sum=s;
                    row=i;
                }
            }
            return row;
        }
};

// { Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}  // } Driver Code Ends
