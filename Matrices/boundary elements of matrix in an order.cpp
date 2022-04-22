
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&matrix)
    {
        vector<int> a;
        int n=matrix.size();
        int m=matrix[0].size();
        if(n==1)
        {
            for(int i=0;i<m;i++)
            {
                a.push_back(matrix[0][i]);
            }
            return a;
        }
        if(m==1)
        {
            for(int i=0;i<n;i++)
            {
                a.push_back(matrix[i][0]);
            }
            return a;
        }
        int l=0;
        int h=0;
        int r=n;
        int c=m;
        for(int i=0;i<m;i++)
        {
            a.push_back(matrix[0][i]);
        }
        for(int i=1;i<n-1;i++)
        {
            a.push_back(matrix[i][0]);
            a.push_back(matrix[i][m-1]);
        }
        for(int i=0;i<m;i++)
        {
            a.push_back(matrix[n-1][i]);
        }
        return a;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		Solution obj;
		vector<int>ans = obj.BoundaryElements(matrix);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends
