// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) 
    {
        int mini=INT_MAX;
        int c=0;
        for(int i=0;i<N;i++)
        {
            int m=count(A[i].begin(),A[i].end(),1);
            if(mini>m)
            {
                mini=m;
                c=i;
            }
        }
        if(c==0)
        {
            return 1;
        }
        return c+1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}  // } Driver Code Ends
